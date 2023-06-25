#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int rollNumber;

private:
    int age;

public:
    Student()
    {
        cout << "Default constructor called" << endl;
    }

    Student(int r)
    {
        cout << "Constructor 2 called !!" << endl;
        rollNumber = r;
    }

    Student(int a, int r)
    {
        cout << "Constructor 3 called !!" << endl;
        age = a;
        rollNumber = r;
    }
    void display()
    {
        cout << age << " " << rollNumber << '\n';
    }

    int getAge()
    {
        return age;
    }

    void setAge(int n, int password)
    {
        if (password != 123)
        {
            return;
        }
        if (n < 0)
        {
            return;
        }
        age = n;
    }

    ~Student()
    {
        cout << "Destructor called !!" << endl;
    }
};

int main()
{
    /*
    // Create objects statically
    Student s1;
    Student s2;

    Student s3, s4, s5;
    s1.age = 24;
    s1.rollNumber = 101;

    // Create objects dynamically
    s1.display();

    cout << "S1 age : " << s1.getAge() << '\n';
    cout << "S1 Roll number : " << s1.rollNumber << '\n';

    Student *s6 = new Student;
    (*s6).age = 23;
    (*s6).age = 104;
    // Or we can do the same thing using ->

    s6->age = 23;
    s6->rollNumber = 104;

    s3.setAge(12);
    s3.rollNumber = 105;

    Student *s7 = new Student;
    s7->setAge(17);
    s7->rollNumber = 106;

    s3.display();
    s7->display();
*/
    Student s1;
    s1.display();

    Student s2;

    Student *s3 = new Student;
    s3->display();

    Student s4(15);

    Student *s5 = new Student(20, 1002);
    s5->display();
    delete (s5); // Explicitly called Destructor for dynamically created object
}