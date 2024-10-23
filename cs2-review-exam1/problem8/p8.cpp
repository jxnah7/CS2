/*

Classes - 8) Define a class Student

The class should have private attributes of name, GPA, major, and year
(“Freshman”, “Sophomore”, “Junior”, “Senior”)

The class should have a methods, updateGPA(), changeMajor(), to change these
values

Also include a startNextYear() (no input parameters) method to update the
student’s year when moving from Freshman -> Sophomore, etc. Seniors will stay
Seniors until they graduate

Write a constructor that to give starting values to each of the attributes (no
console input)

If no values are provided for GPA, major, or year, they should be set to
4.0, “undecided” and “Freshman”

Finally, declare two objects from this class for the first

Use the updateGPA() method of the first object
Use the changeMajor() method of the second object
(you don’t need to write main(), just the code for declaration and logic)

*/

#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name;
        float gpa;
        string major;
        string year;
    public:

    void updateGPA(float inGPA){
        gpa = inGPA;
    }

    void changeMajor(string inMajor){
        major = inMajor;
    }

    void startNextYear(){
        if(year == "freshman" || year == "Freshman"){
            year = "Sophomore";
        }
        else if(year == "sophomore" || year == "Sophomore"){
            year = "Junior";
        }
        else if(year == "junior" || year == "Junior"){
            year = "Senior";
        }
    }

    Student(string OKname, float OKgpa = 4.0, string OKmajor = "undecided", string OKyear = "Freshman"){
        name = OKname;
        major = OKmajor;
        year = OKyear;
    }
};

int test(){
    Student student1("Alice");
    Student student2("Bob", 3.7, "Computer Science", "Junior");

    student1.updateGPA(2.7);
    student2.changeMajor("Health Sciences");
\
    return 0;
};

int main(){
    return 0;
};