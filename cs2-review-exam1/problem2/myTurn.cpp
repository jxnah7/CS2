// Functions - 2) Write a function “reviewFunc()” 
// that takes an input parameter string
// “msg” and prints that message. Next, 
// add a default value to msg, “test message”.

#include <iostream>
#include <string>

using namespace std;

void reviewFunc(string msg = "text message"){
    cout << "You typed: " << msg << endl;
}

int main(){
    string inMsg;
    cout << "Please enter a message: ";
    getline(cin, inMsg);

    reviewFunc(inMsg);

    return 0;
}

// int main is required to run the program 
