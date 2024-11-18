/*
QUESTION: Assume you have an array of values as shown below [5/10 Marked score]


arr1 holds 5 values - {3.0, 2.1, 4.0, 6.0, 0.9}

int capacity = 5;

a. what will each of the following lines of code do when executed in sequence?
b. what values are stored in arr1 and arr2 after this is complete?

//line 1
double *arr2 = new double[capacity - 3];

//line 2
arr2 = arr1;

Half correct ANSWER: line 1 declares a pointer named arr1 which holds predetermined values  and stores them inside arr2
arr1 values remain as is, unchanged,  but arr2 only holds 3 elements since the size/capacity is 2, so it would hold
3.0/2.1/4.0 since indexing starts with 0

CORRECT ANSWER: 
In line 1, arr2 is allocated a new array of size 2, but this is temporary because line 2 immediately reassigns arr2 to point to arr1. 
After line 2, arr2 no longer refers to the new memory created in line 1 (causing a memory leak), 
and it now points to the same array as arr1. Both arr1 and arr2 contain the values {3.0, 2.1, 4.0, 6.0, 0.9}.

Your mistake was saying arr2 would hold only 3 elements; this is incorrect because arr2 points to arr1, which has 5 elements.
*/
