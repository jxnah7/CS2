/*
task 1: Define a simple class for nodes of character data type that will be used in a singly linked list.
Exam2Node. the nodes should connect forward to the next element in the list

class Exam2Node {
// task 1
}

class Exam2LL {
// task 2
// everything public here is ok
}

task 2: define a simple class Exam2LL for a singly linked list of your nodes. You only need a head node
for this question, but you may include one other pointer if you want.

task 3: once this is complete, add methods for your exam2LL class that will complete the following:

  printAll(); - print character contents of the nodes of the entire list, with spaces in between each char
  replaceAs(); - finally, define a method that will replace any 'a' characters contained in your node data in the list with a '!' character

*/
#include <iostream>
using namespace std;

class Exam2Node {
  public:
    char data;
    Exam2Node *next;
};

class Exam2LL {
  public:
    Exam2Node *head = new Exam2Node();

    void printAll(){
      Exam2Node *current = head;
      while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
      }
    }
    void replaceAs() {
        Exam2Node *current = head;
        while (current != nullptr) {
            if (current->data == 'a') {
                current->data = '!'; // Replace 'a' with '!'
            }
            current = current->next;
        }
    }

};