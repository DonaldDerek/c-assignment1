/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Problem4:
Write a program that initializes a two-dimensional array-of-double and uses one of the copy functions
from Exercise 3 to copy it to a second two-dimensional array. Because a two-dimensional array is an
array of arrays, a one-dimensional copy function can be used with each subarray.
*/

#include <stdio.h>
#include "../problem3/arrayhelper.c"

int main(int argc, char *argv[]){

	double source[5][5]={
		{1.1,2.2,3.3,4.4,5.5},
		{1.1,2.2,3.3,4.4,5.5},
		{1.1,2.2,3.3,4.4,5.5},
		{1.1,2.2,3.3,4.4,5.5},
		{1.1,2.2,3.3,4.4,5.5}
	};
	double target[5][5];

	int i;
	int n = sizeof(source) / sizeof(source[0]);
	printf("Printing 2D Array \n");
	for(i = 0 ; i < n ; i++){
		copy_ptrs(target[i], source[i], source[i]+5);
		print_arr(target[i]);
		printf("*********************\n");
	}
	return 0;
}