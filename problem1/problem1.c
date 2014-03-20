/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Problem1:
Write a program that takes two command-line arguments. The first is a string; the second is the
name of a file. The program should then search the file, printing all lines containing the string.
Because this task is line oriented rather than character oriented, use fgets() instead of getc(). Use
the standard C library function strstr() to search each line for the string. Assume no lines are longer
than 255 characters.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	
	if (argc != 3){

		printf("Usage: %s string filename \n",argv[0]);
	}
	else{

		char *string = argv[1];
		char *filename = argv[2];
		char str[255];
		char *result;
		int count;

		printf("Searching for %s in %s \n",string,filename);


		//Open file for read
		FILE *file = fopen( argv[2], "r");

		//Check for file or permissions
		if(file == 0){

			printf("Could not open file \n");
		}
		else{

			//Loop till the end of file
			while(!feof(file)) {

				//Get line by line
				if (fgets(str,255,file)) {

					//Search for input string inside file
					result = strstr(str, string);

					//Eliminate bad results
					if(result != 0) {
						count++;
						printf("\n ***** %i-RESULT ***** \n %s \n", count, result);
					}
				}
			}

			printf("\n %i occurences of the word %s\n", count, string);

			fclose(file);
		}
		
	}


	return 0;
}