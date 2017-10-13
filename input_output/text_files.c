#include <stdio.h>
#include <limits.h>
// LIBRARY
#include <studio.h>

int main() {


	// WRITE TO A FILE
	// *****************************************
   // 1) open file
   char file_directory[]="test.txt";
   FILE *pointer;
   pointer=fopen(file_directory, "w");
   
   // 2) write to file
  	char some_text[]="my name is mohamed";
  	fprintf(pointer, some_text);
   fputs(some_text, pointer);

   // 3) close file
   fclose(pointer);




   // READ FROM FILE
	// *****************************************
   // 1) open file
   char file_directory[]="test.txt";
   FILE *pointer;
   pointer=fopen(file_directory, "r");

   // 2) read from file
   char line[255];
   while(!feof(pointer)){
   	//fscanf(pointer, "%s", line);
   	fgets(line, 255, (FILE*)pointer);
   	printf("\nCurrent Line : %s", line);
   }

   // 3) close file
   fclose(pointer);

   
   return 0;
}