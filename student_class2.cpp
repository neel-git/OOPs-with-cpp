#include <bits/stdc++.h>
using namespace std;

class Student
{
    int age;
    // int const rollNumber;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;
        // this -> name = name; // Shallow copy

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name); // Deep copy
    }

    // If we have const int rollNumber then we have to use Initialisation list for intitalising
    /*Student (int r) : rollNumber(r) {

     } */

    // Copy Constructor
    Student(Student const &s)
    {
        this->age = s.age;
        // this -> name = s.name; //Shallow copy
        // But we have to use deep copy so
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << age << " " << name << endl;
    }
};

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[2] = 'e';
    Student s2(25, name);
    s2.display();

    s1.display();
}