##Assignment 1 - C
###1. (20 points)
Write a program that takes two command-line arguments. The first is a string; the second is the
name of a file. The program should then search the file, printing all lines containing the string.
Because this task is line oriented rather than character oriented, use fgets() instead of getc(). Use
the standard C library function strstr() to search each line for the string. Assume no lines are longer
than 255 characters.

###2. (20 points)
Write a program that takes as command-line arguments a character and zero or more filenames. If
no arguments follow the character, have the program read the standard input. Otherwise, have it
open each file in turn and report how many times the character appears in each file. An output file
“output.txt” should be created, that includes: The filename, the character itself along with the count
- in a properly formatted manner. Include error-checking to see whether the number of arguments is
correct and whether the files can be opened. If a file can’t be opened, have the program report that
fact and go on to the next file.

###3. (30 points)
Write a program that initializes an array-of-double and then copies the contents of the array into
three other arrays. (All four arrays should be declared in the main program.)
To make the first copy, use a function with array notation. To make the second copy, use a function
with pointer notation and pointer incrementing. Have the first two functions take as arguments the
name of the target array, the name of the source array, and the number of elements to be copied.
Have the third function take as arguments the name of the target, the name of the source, and a
pointer to the element following the last element of the source.
That is, the function calls would look like this, given the following declarations:

```
1 double source [ 5 ] = {1.1 , 2.2 , 3.3 , 4.4 , 5 . 5 } ;
2 double target1 [ 5 ] , target2 [ 5 ] , target3 [ 5 ] ;
3
4 copy_arr(target1 , source , 5);
5 copy_ptr(target2 , source , 5);
6 copy_ptrs(target3 , source , source + 5);
```

###4. (15 points)
Write a program that initializes a two-dimensional array-of-double and uses one of the copy functions
from Exercise 3 to copy it to a second two-dimensional array. Because a two-dimensional array is an
array of arrays, a one-dimensional copy function can be used with each subarray.

###5. (15 points)
Use a copy function from Exercise 3 to copy the third through fifth elements of a seven-element
array into a three-element array. The function itself need not be altered; just choose the right actual
arguments. The actual arguments need not be an array name and array size. They only have to be
the address of an array element and a number of elements to be processed.