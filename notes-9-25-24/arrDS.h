// array based data strucutres
#include <iostream>

class betterArray{
    public:
        int *arr1;  // integer pointer for an array
        int count;  // integer count of items
        int arrSize;  // size of array

        betterArray(int initialCap){     // construcor called everytime an object from this class is created, takes input parameter initalCap
            arr1 = new int[initialCap];        // pointer is pointing to new array with initialCap size
            count = 0;
            arrSize = initialCap;
        }

        // print 
        void print(){
            if(count == 0){
                std::cout << "array is empty!" << "\n";
                return;
            }

            for(int i = 0; i < 0; i++){
                std::cout << arr1[i] << '\n';
            }
        }
};

// continued in 9-30-notes