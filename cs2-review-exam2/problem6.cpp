// STACKS

/*

Assume you are given a setup for a stack (with a dynamic arrayay). Be prepared to be able
to either explain (in plain language) and/or implement the following:
a. Push new items into the stack
b. “pop” or remove items from the stack
c. Resize the stack if needed

*/

/*
ANSWER:
  in plain english:
a) Pushing a new item onto a stack is adding another item onpeak, similar to a stack of pancakes you can only add from peak
b) popping from the stack is taking from the peak or most recent item, again like pancakes you can only remove from the peak
c) if the stack is full, we need to resize the amount of pancakes we can add, so we get a bigger plate, or if we have too little then we get a smaller plate

*/

#include <iostream>
using namespace std;

class Stack {
private:
    int* array;
    int size;
    int peak;

public:
    Stack(int size = 10) {
        array = new int[size];
        size = size;
        peak = -1;
    }

    ~Stack() {
        delete[] array;
    }

    void push(int value) {
        if (peak == size - 1) {
            resize();
        }
        array[++peak] = value;
        cout << "Pushed: " << value << endl;
    }

    int pop() {
        if (peak == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return array[peak--];
    }

    void resize() {
        int newsize = size * 2;
        int* newarray = new int[newsize];
        for (int i = 0; i <= peak; i++) {
            newarray[i] = array[i];
        }
        delete[] array;
        array = newarray;
        size = newsize;
    }
};

int main() {
    Stack stack;

    stack.push(10); // add to top 10

    cout << "Popped: " << stack.pop() << endl; // pop top off
    stack.push(12);

    return 0;
}
