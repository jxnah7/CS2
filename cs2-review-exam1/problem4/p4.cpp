// Arrays - 4) Is the following an invalid access for the array numsList? Explain.
#include <iostream>

using namespace std;
int main(){
    int numsList[5];    //  makes an int array named numsList with 5 elements
    int x = 3;      // declares x to be 3

    // this looks something like this
    // numsList[0], numsList[1], numsList[2], numsList[3], numsList[4]

    cout << numsList[2 - x*2 + 5];  // this is just simple math now 

    return 0;
}



// essentially this is 
// 2 - x * 2 + 5
// substitute x and now its this 
// 2 - 3 * 2 + 5
// now do the math
// 2 - 6 + 5
// -4 + 5
// output is 1

// this is valid since we have elements in the array from 0-4
// this accesses the second element which is numsList[1]
// if the output was 0 it would access the first element which is numsList[0]