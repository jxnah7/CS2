// warm up for CSCI II 9-16-24 and reference ex and notes

// define a function plusOne()
//      input: an integer
// task: the function should add one to the input object

#include <iostream>

void plusOne(int &x){       // i want u to take this address from memory and work there, dont make a copy
    x = x + 1;
    std::cout << "The address of x is: " << &x << '\n';
}

int main(){
    // declare integer object, initialize it with value
    int monkey = 99;
    //print value, run plusOne function on it
    std::cout << "Before function: " << monkey << '\n';

    plusOne(monkey);
    // print value again
    std::cout << "After function: " << monkey << '\n';


    // reference is address location of an object in memory 
    // instead of using the identifier
    // print address of monkey

    std::cout << "The address of monkey is: " << &monkey << '\n';
    // notice everytime compiled the memory is different, 

    // go to the plusOne Function and print the address of x in that function 
    // notice how you get the same address of x and monkey


    // declare an integer x

    int x = 10;      // on the stack, very easy

    // NEW: declare a pointer called ptr

    int *ptr;   // a pointer object to any integer
    // whitespace doesnt matter
    //      int* ptr
    //      int * ptr
    
    // assign ptr with a new address
    // ptr should be assigned with the address of x

    ptr = &x;
    //  print out the address stored in ptr
    std::cout << "The address of x inside main is: " << &x << '\n';
    std::cout << "The address of ptr is: " << ptr << '\n';   // you do not use & , or it will give you ptr's address and not redirect you to x



    // practice
    // declare another pointer p2
    // assign p2 to the address stored in monkey

    int *p2 = &monkey;

    std::cout << "The address of p2 is: " << p2 << '\n';

    // if you initialize p2 = ptr, then p2 will have the same address as ptr

    p2 = ptr;
    std::cout << p2 << '\n';
    std::cout << ptr << '\n';

    return 0;
}