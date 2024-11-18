/* 
Can you use a pointer and pointer arithmetic 
instead of index values to access elements of an array? 
If so, write a function that will print 10 sequential elements of an array if
you are given a pointer to the first element you want to print 
(not necessarily the first element of the array!)
*/

// For example, input is ptr = &arr[16]. Print arr[16-25] using this pointer

/*
Yes you can! Because pointers can be incremented, we change the pointers
memory address to point to different elements of an array
ex. ptr + 1 moves the pointer to the next element, ptr + 2 moves it twice
*/
#include <iostream>
using namespace std;


void printArrayElements(int* ptr) {
    // Print 10 elements starting from the element pointed to by ptr
    for (int i = 0; i < 10; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[30] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    
    // Pointer to the 16th element (arr[16])
    int* ptr = &arr[16];
    
    // Print the 10 elements starting from arr[16]
    printArrayElements(ptr);
    
    return 0;
}
