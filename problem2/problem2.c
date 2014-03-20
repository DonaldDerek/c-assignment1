/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Problem2:
Write a program that takes as command-line arguments a character and zero or more filenames. If
no arguments follow the character, have the program read the standard input. Otherwise, have it
open each file in turn and report how many times the character appears in each file. An output file
“output.txt” should be created, that includes: The filename, the character itself along with the count
- in a properly formatted manner. Include error-checking to see whether the number of arguments is
correct and whether the files can be opened. If a file can’t be opened, have the program report that
fact and go on to the next file.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	//Check for correct usage or invalid character
	if(argc < 2 || (strlen(argv[1]) != 1)){
		printf("Usage: %s char filename1 filename2 filename3... \n", argv[0]);
	}
	//Check if the user inputs only a character
	else if( argc == 2 && (strlen(argv[1]) == 1)){
		
		char text[255];
		fputs("Ask me anything: ", stdout);
		fflush(stdout);
		fgets(text, sizeof text, stdin);
		printf("3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989380952572010654858632788659361533818279682303019520353 \n");

	}
	else {

		int i;
		char c;
		int count;

		//Open file for write
		FILE *output = fopen("output.txt", "w");
		fprintf(output, "Filename \t Ch \t Count\n");
		fprintf(output, "******** \t ** \t *****\n");

		//Loop on files
		for(i = 2; i < argc; i++){
			count = 0;
			printf("Searching in file: %s \n", argv[i]);

			//Open file for read
			FILE *file = fopen(argv[i], "r");

			//Check for file or permissions
			if (file == 0){
				
				printf("error: unable to open file %s\n", argv[i]);
			}
			else{
				
				//Loop till the end of file
				while (!feof(file)) {

					//Get each character
					c = fgetc(file);

					//Search for input character occurences
					if (c == (int)(*argv[1]))
						count++;
				}

				//Write to output.txt
				fprintf(output, "%s \t %s \t %d \n", argv[i], argv[1], count);

			}
		}
		printf("\nSearch Complete: \nCheck results inside output.txt \n");
	}
return 0;
}