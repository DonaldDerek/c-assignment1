/*
Author: Donald Derek Haddad
Email: donaldderek.haddad@gmail.com
ID: 2007021921

Description: Array Helper functions included in the problem 3-5 files.
*/
#include <stdio.h>

/**
 * Copy an array of doubles using array notation 
 * 
 * @param target[] Name of the target array 
 * @param source[] Name of the source array 
 * @param el_count The number of elements to be copied
 * @return void
 */
void copy_arr(double target[], double source[], int el_count){
		int i;
		for (i = 0; i < el_count ; i++){
			target[i] = source[i];
		}
}

/**
 * Copy an array of doubles using the pointer notation 
 * 
 * @param *target Name of the target array 
 * @param *source Name of the source array 
 * @param el_count The number of elements to be copied
 * @return void
 */
void copy_ptr(double *target, double *source, int el_count ){
	int i;
	for (i = 0; i < el_count ; i++){
		*target = *source;
		target++;
		source++;
	}
}

/**
 * Copy an array of doubles using array notation 
 * 
 * @param *target Name of the target array 
 * @param *source Name of the source array 
 * @param *source5 Pointer to the element following the last element of the source
 * @return void
 */
void copy_ptrs(double *target, double *source, double *source5){
	double *source0 = source;
	while( source0 != source5){
		--source5;
		*target= *source;
		target++;
		source++;
	}
}

/**
 * Print first 5 elements in an array of doubles
 * 
 * @param arr[] Name of the target array
 * @return void
 * @note Needed for debugging purposes
 */
void print_arr(double arr[]){
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("%f \n", arr[i]);
	}
}