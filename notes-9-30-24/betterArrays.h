// array based data strucutres
// continued from 9-25-notes
#include <iostream>

class betterArray{
    public:
        int *arr;  // integer pointer for an array
        int numItems;  // integer count of items
        int capacity;  // size of array

    betterArray(int initialCap){     // constructor called everytime an object from this class is created, takes input parameter initalCap
        arr = new int[initialCap];        // pointer is pointing to new array with initialCap size
        numItems = 0;
        capacity = initialCap;
    }

        // print 
        void print(){
            if(numItems == 0){
                std::cout << "array is empty!" << '\n';
                return;
            }

            for(int i = 0; i < numItems; i++){
                std::cout << arr[i] << " ";
            }
        }

    // define a method push() that will add a new avlue 
    // to the array

    // EX: push(8) ==> array should add an 8 to the first avaliable space

    // note the array might fill up! if the array is full
    // print an error message

    void push(int value){
            // check if array is full
            if(numItems >= capacity){
                // instead of this resize the array to add 3 more spaces
                // resize();
                // std::cout << "array is full! Discarding value: " << value  << '\n';
                return;
            }
            // insert the array
            arr[numItems] = value;
            numItems++;


            // after adding confirm the new value and print the array
            std::cout << "added value:" << value << "!" << '\n';
            std::cout << "array values: ";
            print();
    }

    // method to remove a value from the stack
    // and return that value

    // pop()
    // no input parameter always return the items
    // on top of the stack
    // do it.
    // fix this so that we dont remove anything 
    // when we have zero items, return -1
    int pop(){
        // check if array is empty
        if(numItems == 0){
            std::cout << "ERROR! Array is empty." << '\n';
            return -1;
        }
        int removed;
        // before i remove, lets record what im removing
        

        numItems--;
        // record what im removing
        removed = arr[numItems];
        // test that the element is "removed" by printing the array
        std::cout << "removing value:" << removed << "!" << '\n';
        std::cout << "array values: ";
        print();

        return removed;
    }

    // define a method resize(), 
        // will increase the capacity of the array by 3
        // arr should still have old values
        // arr should still be findable by using arr
    //int resize(){
        
              

    //    return numItems;
    //}
};

