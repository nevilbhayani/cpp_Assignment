#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &n, int a) : name(n), age(a) {}

    void readData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    float percentage;

public:
    Student(const string &n, int a, float p) : Person(n, a), percentage(p) {}

    void readData()
    {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayData()
    {
        Person::displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person
{
private:
    double salary;

public:
    Teacher(const string &n, int a, double s) : Person(n, a), salary(s) {}

    void readData()
    {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData()
    {
        Person::displayData();
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Student student("Nevil", 21, 80);
    Teacher teacher("Nileshsir", 35, 50000);

    cout << "Student Information:" << endl;
    student.displayData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayData();

    return 0;
}
