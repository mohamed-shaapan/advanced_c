#include <stdio.h>
#include <limits.h>

int main() {


	// One Dimensional Array
	// *****************************************
 	int array1[]={1,1,3,5,8,13,21};

 	int array2[3];
 	int index;
 	for(index=1; index<=3; index++){
 		array2[index-1]=func(random);
 	}


 	// Multi-Dimensional Arrays
 	// *****************************************
 	int multi[4][4];
 	int row;
 	for(row=1; row<=4; row++){
 		int col;
 		for(col=1; col<=4; col++){
 			multi[row-1][col-1]=func(random);
 		}
 	}
 	
   

   
   return 0;
}