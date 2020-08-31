/* The program for exercise 5.40 */
/* Iterative resolving of Hanoi. The resolution was taken from wikipedia */

#include <stdio.h> 
#include <math.h> 

void carryingOver(int, int, int); 

main() 
{ 
   int number, countDisk, counter = 1, count;
   printf("Введите количество дисков: ");
   scanf("%d", &number); 
   while (counter <= pow(2, number) - 1) { /* Запускаем цикл повторений */ 
      if (counter % 2 != 0) { /* На нечетном ходу мы будем трогать только самый маленький диск */ 
          printf("%3d %d ", counter, 1);
          carryingOver(number, counter, 1); /* С помощью этой функции определяем для данного диска перемещение */ 
          } else { /* Определяем диск который нужно переместить на четном ходу */ 
          count = counter; countDisk = 0; 
          while (count % 2 == 0) { /* Диск который нужно переместить */ 
              countDisk++; /* будет числом деления номера хода на 2 без остатка */ 
              count = count / 2;
          } // End of while count%2
          printf("%3d %d ", counter, countDisk + 1);
          carryingOver(number, counter, countDisk + 1); 
          } // end of else
          counter++; 
       }  // end of while counter <= pow
       return 0; 
}  // End of main

/* Функция определения перемещения дисков */ 
void carryingOver(int n ,int i, int k) 
{ 
    int t, axisX, axisY, axisZ; 
    if (n % 2 == 0) { /* Определяем порядок осей в зависимости от четности */ 
        axisX = 1; /* и не четности количества дисков */ 
        axisY = 2; 
        axisZ = 3; 
    } else { 
        axisX = 1; 
        axisY = 3; 
        axisZ = 2; } /* Номер хода можно представить единственным образом */ /* как произведение некоего нечетного числа на степень двойки */ /* k будет номером диска который мы перемещаем */ 
        t = ((i / pow(2, k - 1)) - 1) / 2; 
        if (k % 2 != 0) { /* Определяем перемещение дисков для нечетного хода */ 
            switch (t % 3) { /* Выбираем перемещение в зависимости от данного условия */ 
                case 0: 
                printf("%d -> %d\n", axisX, axisY); 
                break; 
                
                case 1: 
                printf("%d -> %d\n", axisY, axisZ);
                break; 
                
                case 2: 
                printf("%d -> %d\n", axisZ, axisX);     
                break; 
            } // end of switch
        } else { /* Определяем перемещение дисков для чётного хода */ 
            switch (t % 3) { 
                case 0: 
                printf("%d -> %d\n", axisX, axisZ); 
                break; 
            
                case 1: 
                printf("%d -> %d\n", axisZ, axisY); 
                break; 
            
                case 2: 
                printf("%d -> %d\n", axisY, axisX); 
                break; 
            } // end of switch
        } // end of else
} // end of carryingOver