#include <stdio.h>
#include <limits.h>

int main() {


	// Read User Input
    // *****************************************
    //works for (int, short, long)(float, double, long double)(char)(strings)
    int user_input=0;
    printf("Enter You Number : ");
    scanf("%d", &user_input);
    printf("\nYour Number Is : %d", user_input);
    



 	// Print Stuff to Screen
 	// *****************************************
    int int_var = 123;
    short short_var=5;
    long long_var=987987234;
    float float_var=123.456;
    double double_var=1.234234;
    long double long_double_var=123.1231212357568678;
    char char_var='A';
    char string_var[] = "mohamed";
    

    printf("Integer Number : %d", int_var);
    //printf("Integer Number : %d", short_var);
    //printf("Integer Number : %d", long_var);
    printf("Integer Number : %f", float_var);
    //printf("Integer Number : %d", double_var);
    //printf("Integer Number : %d", long_double_var);
    printf("Integer Number : %c", char_var);
    printf("Integer Number : %s", string_var);



   
   return 0;
}