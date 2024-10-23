/* Functions/Arrays - 7) Write a function that will take input: 
array of integers, size of the array

First, modify each element of the array so that any values above 10 are
assigned with a 0 value.
For all other elements, leave the values unchanged.

Next, search the array and return the number of nonzero values */

#include <iostream>

using namespace std;

int arraysEasy(int arr[], int size){
    for (int i = 0; i < size; ++i){
        if(arr[i] > 10){
            arr[i] = 0;
        }
    }
    
    int nonzeroCount = 0;

    for(int i = 0; i < size; ++i){
        if(arr[i] != 0){
            nonzeroCount++;
        }
    }
    return nonzeroCount;

};

int main(){
    return 0;
};