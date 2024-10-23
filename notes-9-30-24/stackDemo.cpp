#include <iostream>
#include "betterArrays.h"

int main(){
    int arr[3];

    betterArray myArr(3);

    // print the empty array
    myArr.print();

    // add the values 5, 10, 15, to the array
    myArr.push(5);
    myArr.push(10);
    myArr.push(15);

    // add one more 20
    myArr.push(20);

    // print the array again
    myArr.print();


    myArr.pop();    // this should remove the 15
    myArr.pop();    // this should remove the 10


    myArr.pop();    // this should remove the 5
    myArr.pop();    // numItems will -1

    myArr.print();  

    myArr.push(2);
}