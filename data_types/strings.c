#include <stdio.h>
#include <limits.h>


// 01_BASIC STUFF
// *****************************************
int main() {

	// Character Values
 	// *****************************************
    char letter='A';
    printf("Your Letter : %c", letter);

    // String Values
    // *****************************************
    char name[] = "mohamed shaapan";
    printf("Your Name : %s", name);
   
   return 0;
}



// 02_STRING OPERATIONS
// *****************************************
void stringOperations(){
    char string1[100]="Mohamed";
    char string2[100]="Shaapan";
    //copy
    strcpy(string1, string2);
    //concatenate
    strcat(string1, string2);
    //length
    stringLength(string1);
    //truncate
    truncateString(string1, 2);
    //nth character
    char nthCharacter=string1[5];
    //matching
    short testCondition=strcmp(string1, string2)==0;
    //lower and upper case
    strcpy(string1, strlwr(string1))
    strcpy(string1, strupr(string1))

}



int stringLength(char stringToTest[100]){
    int length=0;
    int loop;
    for(loop=1; loop<=100; loop+=1){
        if(stringToTest[loop-1]=='\0'){
            break;
        }
        length+=1;
    }
    return length;
}