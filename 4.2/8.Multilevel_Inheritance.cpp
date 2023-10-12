#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {}

    void displayRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student
{
protected:
    int marksSubject1;
    int marksSubject2;

public:
    Test(int roll, int marks1, int marks2) : Student(roll), marksSubject1(marks1), marksSubject2(marks2) {}

    void displayMarks()
    {
        cout << "Maths marks : " << marksSubject1 << endl;
        cout << "English marks : " << marksSubject2 << endl;
    }
};

class Result : public Test
{
public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {}

    void displayTotalMarks()
    {
        int totalMarks = marksSubject1 + marksSubject2;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result studentResult(21, 85, 79);

    cout << "Student Information :" << endl;
    studentResult.displayRollNumber();
    studentResult.displayMarks();
    studentResult.displayTotalMarks();

    return 0;
}
