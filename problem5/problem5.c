/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Problem5:
Use a copy function from Exercise 3 to copy the third through fifth elements of a seven-element
array into a three-element array. The function itself need not be altered; just choose the right actual
arguments. The actual arguments need not be an array name and array size. They only have to be
the address of an array element and a number of elements to be processed.
2
*/

#include <stdio.h>
#include "../problem3/arrayhelper.c"

int main(int argc, char *argv[]){

	double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5,6.6,7.7};
	double target[3];

	copy_ptr(target, source+2, 3);

	return 0;
}