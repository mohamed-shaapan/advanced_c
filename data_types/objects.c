#include <stdio.h>
#include <limits.h>


// 01_GLOBAL VARIABLES
// ********************************************
struct Book {

 		// 01_ATTRIBUTES
 		char title[100];
 		char author[100];
 		char genre[100];
 		int published;

 		// 02_CONSTRUCTOR

	 	// 03_METHODS
	 	// no methods can be created

}

// 02_RUN APPLICATION
// ********************************************
int main() {

	struct Book b1;
    strcpy( b1.title, "Principia Mathematica");
    strcpy( b1.author, "Issac Newton");
    strcpy( b1.genre, "Science");

   	return 0;
   
}





