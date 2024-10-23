// Control Structures - 6) Write a for loop that will start at 1 and iterate to 50. 
// Your loop should print to console the values as it iterates (1, 2, 3, etc.) 
// *except the following: if the value is divisible by 3, 
// output “whiz” instead of the value, if it’s divisible by 5, output
// “bang”, and if it’s divisible by both, output “whiz-bang”

#include <iostream>

using namespace std;

int main(){
   
    for(int i = 1; i <= 50; i++){   // this is our counter starting from 1 to 50, incrementing by 1
        if(i % 15 == 0){   // 15 is the first number divisable by both 5 and 3
            cout << "whiz-bang" << endl;
        }
        else if(i % 3 == 0){    // we want it to equal 0 to be divisable by 3
            cout << "whiz" << endl;
        }
        else if(i % 5 == 0){       // same with 5
            cout << "bang" << endl;
        }
        else{   // else print regular number
            cout << i << endl;
        }
    }

    return 0;
};

// simple fizzbuzz leetcode
// 