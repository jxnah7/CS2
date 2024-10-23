//     dynamic allocation and pointers
#include <iostream>

int main(){
    int num = 10;
    int *p;
    p = &num;

    // print out the value of num

    std::cout << num << '\n';

    // access the value of num via address (using p)
        // p takes us to the correct address
            // we need to rereference this when we get there
    std::cout << *p << '\n';

    *p = 99;

    std::cout << num << '\n';

    // declare another pointer q
        // give it the same address as p 
            // dereference q and print whats inside
                // what is the value stored in *p?
                    // what is the value stored in num?

    
    int *q;
    q = p;
    std::cout << *q << '\n';    //99
    *q = 1;
    std::cout << *q << "  /  " << num << '\n';

    // in order to request memory for an object from the "heap"
    // we use the "new" keyword
    // for example, I want memory for a brand new character object
    // new char
    // we want memory for a brand new integer...
    // when we use the new keyword, our machine will return 
    // the address of the memory where we can store our object
    int ans = 7 - 1;
    int *something = new int;

    // create a brand new integer and save the address to pointer
        // ptr3
    // assign that with a value of 52


    int *ptr3;
    ptr3 = new int;
    *ptr3 = 52;

    // i dont need this integer anymore...
    delete ptr3;    // this frees up memory I asked for

    // now ptr3 can be used for anything else
        // i want an array of 40 integers
    ptr3 = new int[40];
    int *backup = ptr3; // we saved the array!
    ptr3 = new int; // we lost the array!
    // this is called a "memory leak"

    int z = 17;
    int z2 = z; // we saved the lost 17 in another var
    z = 28;

    
    return 0;
}