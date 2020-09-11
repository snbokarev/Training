/* Program for exercise 5.51 */
/* It needs to model game with 2 cubes */
/* Improving program from figure 5.10 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rollDice (void);
int game(void);
void phraseWin(void);
void phraseLose(void);
void phraseWinBye(int);
void phraseLoseBye(void);
void phraseAgain(void);
void phraseEnterRate(void);
void phraseCorrectRate(int);
void phraseCombo(int);

main () {
   int bankBalance = 1000, userRate, gameStatus;
   int userWish = 1; // Flag, continue or not
   int countAll = 0, countWinInRow = 0;
   
   srand(time(NULL));
   
   while (bankBalance > 0 && userWish == 1) {
   	if (countAll == 0)
           printf("%s\n", "Please, enter your rate!");
       else
           phraseEnterRate();
       scanf("%d", &userRate);
   
       // Checking rate
       while (userRate > bankBalance) {
       	phraseCorrectRate(bankBalance);
       	scanf("%d", &userRate);
       } // end of while rate > balance
       
       if (userRate == bankBalance)
          printf("%s\n", "Oh, you do va-bank!");
       
       gameStatus = game(); // Lets go
       
       if (gameStatus == 1) { // Player wins
       	bankBalance += userRate;
       	++countWinInRow;
       	phraseCombo(countWinInRow);
       	phraseWin();
       	printf("Your bank is %d now.\n", bankBalance);
       	phraseAgain();
       	scanf("%d", &userWish);
       } else {
       	bankBalance -= userRate;
       	countWinInRow = 0;
       	phraseLose();
   	    printf("Your bank is %d now.\n", bankBalance);
   	    if (bankBalance > 0) {
           	phraseAgain();
           	scanf("%d", &userWish);
   	    } // end of if bankBalance > 0
       } // end of if else gameStatus
       ++countAll;
   } // end of big while
   
   if (bankBalance == 0) {
   	phraseLoseBye();
   } else {
   	phraseWinBye(bankBalance);
   }
	
	return 0;
	
} // End if main

int rollDice (void) {
	int face1 , face2 , result;
	face1 = 1 + rand() % 6;
	face2 = 1 + rand() % 6;
	result = face1 + face2;
	printf ("Player rolled %d and %d\n" , face1 , face2);
	return result;
	
} // End of rollDice definition

int game(void)
{
	int sum , code, points;
	//srand(time(NULL));
	
	printf("%s\n", "---");
	
	sum = rollDice();
	
	switch (sum) { // Results of the first cast
		case 7: case 11: // Player wins after first cast
		   code = 1;
		   break;
		   
		case 2: case 3: case 12: // Player loses after first cast
		   code = 2;
		   break;
		   
		default: // Count points
		   code = 0;
		   points = sum;
		   printf ("Current points are: %d\n" , points);
		
	} // End of switch
	
	while (code == 0) {
		sum = rollDice();
		if (sum == points) { // Start of if
			code = 1; // Player reproduced result of the first cast
		} else {
			if (sum == 7) {
				code = 2;
			} else {
				code = 0;
			}
		} // End of if
		
	} // End of while
	
	 if (code == 1)
	   puts ("Player wins");
	else
	   puts ("Player loses"); 
	   
   printf("%s\n", "---");
   
   return code;	
	
} // End of game

void phraseWin(void)
{
	int option;
	
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("%s", "You win! ");
		break;
		
		case 2:
		printf("%s", "Congratulations! ");
		break;
		
		case 3:
		printf("%s", "Yay! ");
		break;
		
		case 4:
		printf("%s", "I like this guy! ");
		break;
	} // end of switch
	
} // End of phraseWin

void phraseLose(void)
{
	int option;
	
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("%s", "You lose! ");
		break;
		
		case 2:
		printf("%s", "Oh no! ");
		break;
		
		case 3:
		printf("%s", "Oops! ");
		break;
		
		case 4:
		printf("%s", "Be careful! ");
		break;
	} // end of switch
	
} // End of phraseLose

void phraseWinBye(int option)
{
	if (option > 0 && option <= 10) {
		printf("Take your %d and bye icecream in the nearest store:)\n", option);	
	}
	if (option > 10 && option <= 100) {
		printf("Take your %d and go to the pub:)\n", option);	
	}
	if (option > 100 && option < 1000) {
		printf("Nevermind! You lose just %d:)\n", 1000 - option);	
	}
	if (option == 1000) {
		printf("%d, status quo:)\n", option);	
	}
	if (option > 1000 && option <= 1500) {
		printf("Not bad! You earned %d:)\n", option - 1000);	
	}
	if (option > 1500 && option <= 3000) {
		printf("%s\n", "Good game! Bye!");	
	}
	if (option > 3000 && option <= 7000) {
		printf("%s\n", "Perfect game! Have a nice day!");	
	}
	if (option > 7000) {
		printf("%s\n", "Fantastic game! Will wait for you!");	
	}
} // End of phraseWinBye

void phraseLoseBye(void)
{
	int option;
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("%s", "Probably next time? Bye! ");
		break;
		
		case 2:
		printf("%s", "Take more money next time:) ");
		break;
		
		case 3:
		printf("%s", "Chillout. See you next time. ");
		break;
		
		case 4:
		printf("%s", "The result might be better. Try next time:) ");
		break;
	} // end of switch
} // End of phraseLoseBye

void phraseAgain(void)
{
	int option;
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("%s\n", "Want to try again? Yes - 1, No - 0");
		break;
		
		case 2:
		printf("%s\n", "Go farther? Yes - 1, No - 0");
		break;
		
		case 3:
		printf("%s\n", "Probably lets take money and go home? Keep playing - 1, Go home - 0");
		break;
		
		case 4:
		printf("%s\n", "Don't stop and try to win more? Yes - 1, No - 0");
		break;
	} // end of switch
} // End of phraseAgain

void phraseEnterRate(void)
{
	int option;
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("%s\n", "Ok, make your rate!");
		break;
		
		case 2:
		printf("%s\n", "Do your rate!");
		break;
		
		case 3:
		printf("%s\n", "Come on and make the rate!");
		break;
		
		case 4:
		printf("%s\n", "What is your rate?");
		break;
	} // end of switch
	
} // End of phraseEnterRate

void phraseCorrectRate(int balValue)
{
	int option;
	option = 1 + rand() % 4;
	switch(option) {
		case 1:
		printf("Sorry, but your rate can't be greater than %d, enter again your rate!\n", balValue);
		break;
		
		case 2:
		printf("That's too much. Not greater than %d, please!\n", balValue);
		break;
		
		case 3:
		printf("Oh, you don't get such money yet:) Avaulable amount is %d.", balValue);
		break;
		
		case 4:
		printf("You can bet %d as a maximum\n", balValue);
		break;
	} // end of switch
	
} // End of phraseCorrectRate

void phraseCombo(int winCount)
{
	switch(winCount) {
		case 1: case 2:
		printf("%s", "");
		break;
		
		case 3:
		printf("%s\n", "HAT TRICK!");
		break;
		
		case 4:
		printf("%s\n", "COMBO!!!");
		break;
		
		default:
		printf("%s\n", "UNBELIEVABLE!!!");
		break;
		
	} // end of switch
	
} // End of phraseCombo
