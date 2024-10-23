#include <iostream>

int main(){

    // declare an array with 3 integer elements

    int arr1[3];    // fixed with 3 elements,  does not change

    // fill with pattern 0, 1, 2, etc...

    for(int i = 0; i < 3; i++){
        arr1[i] = i;
    }


    // use dynamic allocation to create the same size arra
    int *arr2;  // declare a pointer to an integer
    arr2 = new int[3]; // malleable, on the right hand side we are asking for an array stored somewhere, on the left we are pointing there



    // use the pointer to allocate values to the array
    // assign value of 0 to the first value of the new array
    *arr2 = 0;  // go to this address, open it up and put a 0 there. **dereference**


    int i = 0;
    for(int *elem = arr2; elem < (arr2 + 3); elem++){
        *elem = i;
        i++;
        std::cout << *elem << " ";
    }
    std::cout << '\n';



    // alternatively we can do this for the same effect
    for(int i = 0; i < 3; i++){
        arr2[i] = i;
    }

    std::cout << arr1 << '\n';  // arrays are pointers in disguise


    int *something = new int;   // i want an integer

    *something = 100;
    // now im done with this
    delete something;

    // GOAL: we want to add another element in arr2
        // current: arr2 has 3 elements (0, 1, 2)
        // target: arr2 has 4 elements (0, 1, 2, 99)
    // STEP 1
        // make another larger array (with size 4)
        
    int *tempPtr;   // holds the address of my new array
    tempPtr = new int[4];
    // STEP 2: Copy the values from old array to new array

    // tempPtr = arr2; // this is a memory leak LOL REKT **** most common error 
    
    // Take the first value of array2 and copy to temp array
            // use a loop to copy over each value from arr2 to tempptr

    for(int i = 0; i < 3; i ++){
        tempPtr[i] = arr2[i];
    }

    // we can move arr2 to the new larger array...
    arr2 = tempPtr;

    // delete the old array first
    delete [] arr2;     // delete an array , named arr2 , without putting the brackets it wont free up entire memory used
    // now arr2 is not tied to anything and is free
    arr2 = tempPtr; // 

    //STEP 3: add the last value which is 99
    arr2[3] = 99;

    for(int i = 0; i < 4; i++){
        std::cout << arr2[i] << " ";
    }


    // lets move tempPTR away from our workspace

    tempPtr = nullptr;  // built in keyword with no address
    // this protects us

    std::cout << *tempPtr << '\n';  // segmentation fault error, that lets us know we are making an error

    return 0;
}