#include <stdio.h>
#include <limits.h>

int main() {

	// Some Variables
	int user_input;
    printf("Enter You Age : ");
    scanf("%d", &user_input);

	// Single If
 	// *****************************************
 	if(user_input<=0){
 		printf("invalid number");
 	}

 	// If Else
 	// *****************************************
 	if(user_input<=0){
 		printf("invalid number");
 	}else{
 		printf("Your Age Is : %d", user_input);
 	}

 	// If ElseIF ...
 	// *****************************************
 	if(user_input<=0){
 		printf("invalid number");
 	}else if(user_input<=11){
 		printf("You Are a Child");
 	}else if(user_input<=18){
 		printf("You Are a Teen");
 	}else{
 		printf("You Are a Grown-up");
 	}

	// Nested If
 	// *****************************************
 	if(user_input<=0){
 		printf("invalid number");
 	}else{
 		if(user_input<=11){
 			printf("You're a Child");
 		}
 	}




   return 0;
}