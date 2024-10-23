// Classes - 5) What does a constructor do, how is it coded and what is returned by a
// constructor method of a class?

// A constructor sets up an object to be able to have default attributes
// it also helps defend against errors as every object will be set up with everything needed already


// its coded like this 

#include <iostream>
#include <string>

using namespace std;


class example{
    public:
        string name;
        int age;
        bool isSleepy;

    example(string inName = "defaultName", int inAge = 17){
        name = inName;  // setting the name to a default name if none is given
        age = inAge;    //same thing for age, default if none is given
        isSleepy = true;
        cout << "this will print everytime we create an object using this class";
    }
};

// here we have a class and a constrictor inside to ensure everything is set to a default 
// just incase

int main(){ // main to be able to run code
    return 0;
};