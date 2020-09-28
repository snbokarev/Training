#include <stdio.h> 

main()
{
	char string1[20], string2[] = "string literal";
	int i;
	
	printf("%s\n", "Enter a string:   ");
	scanf("%s", string1);
	
	printf("String1 is: %s\nString2 is: %s\n"
	       "String1 with spaces between characters is: \n",
	       string1, string2);
	       
	 for (i = 0; string1[i] != '\0'; i++)
	     printf("%c ", string1[i]);
	
	
} // End of main