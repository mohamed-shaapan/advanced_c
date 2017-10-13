#include <stdio.h>
#include <limits.h>

int main() {


	// Test Function 1
   	char some_text[]="my name is mohamed";
   	print_text(some_text);

   	// Test Recursive Function
   	int number=7;
	int result=factorial(number);
	printf("Factorial(%d) = %d", number, result);
	

   return 0;
}



	// Print Some Text Function
 	// *****************************************
	void print_text(char some_text[]){
		printf("%s", some_text);
	}


	// Recursive Function
 	// *****************************************
	int factorial(int number){
		if(number==0){
			return 1;
		}else{
			return number*factorial(number-1);
		}
	}


