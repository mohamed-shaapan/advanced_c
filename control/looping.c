#include <stdio.h>
#include <limits.h>

int main() {

	// Some Variables
	int array_size=7;
	int numbers[]={1,1,3,5,8,13,21};

	// For Loop
 	// *****************************************
 	int index;
 	for(index=1; index<=array_size; index++){
 		printf("numbers[%d] = %d\n", index-1, numbers[index-1]);
 	}


 	// While Loop
 	// *****************************************
 	int index=1;
   	while(index<=array_size){
   		printf("numbers[%d] = %d\n", index-1, numbers[index-1]);
   		index++;
   	}




   return 0;
}