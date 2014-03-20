/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Problem3:
Write a program that initializes an array-of-double and then copies the contents of the array into
three other arrays. (All four arrays should be declared in the main program.)
To make the first copy, use a function with array notation. To make the second copy, use a function
with pointer notation and pointer incrementing. Have the first two functions take as arguments the
name of the target array, the name of the source array, and the number of elements to be copied.
Have the third function take as arguments the name of the target, the name of the source, and a
pointer to the element following the last element of the source.
That is, the function calls would look like this, given the following declarations:
*/

#include <stdio.h>
#include "arrayhelper.c" //Problem functions in here

int main(int argc, char *argv[]){

	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5], target2[5], target3[5];

	copy_arr(target1,source,5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);
	
	//Debugging
	printf("printing 1st result \n");
	print_arr(target1);
	printf("printing 2nd result \n");
	print_arr(target2);
	printf("printing 3d result \n");
	print_arr(target3);
	
	return 0;
}