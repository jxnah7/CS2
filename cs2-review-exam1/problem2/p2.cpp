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
    string inMsg;   // declares variable named inMsg with string type

    cout << "Please enter a message: ";     // prints a message for user
    getline(cin, inMsg);    // gets entire line and stores it into inMsg.


    reviewFunc(inMsg);

    cout << "Checking..." << endl;
    return 0;
}