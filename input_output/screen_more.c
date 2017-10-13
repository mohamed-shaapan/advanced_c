#include <stdio.h>
#include <limits.h>

int main() {


	// getChar putChar
    // *****************************************
    // for reading first char only
	int char_var;
	printf("Enter Your Char : ");
	char_var=getchar();

	printf("\nYour Char Is : ");
	putchar(char_var);
    

 	// gets & puts
 	// *****************************************
 	// for reading string variables
	char string_var[100];
	printf("Enter Your Name : ");
	gets(string_var);

	printf("Your Name Is : ");
	puts(string_var);
   

   
   return 0;
}