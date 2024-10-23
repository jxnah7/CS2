// pointer quiz
#include <iostream>

int main(){
    int *PtrA, *PtrB;
    int a = 6;
    int b = 4;

    PtrA = &b;
    PtrB = &a;

    *PtrA = 8;      // +PtrA b changes to 8
    a = 4 + (*PtrB);    // a changes to 10
    *PtrA = *PtrA + 5;      // PtrA changes to 13
    PtrB = &b;  // PtrB is pointing to b
    PtrB = PtrA;    // nothing changes, pointer b already has same address as pointer a
    *PtrB  = *PtrB; // 9 is now assigned to PtrB , so b changes to 9

    // whats teh values of ptrA , ptrB, *Ptra, *PtrB
        // ptrA = address of b
        //ptrB = address of a
        // *PtrA = 9
        // *PtrB = 9

    return 0;
}