#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cerr << "Division by zero is not allowed." << endl;
        return 0;
    }
}

double divide(double a, double b)
{
    if (b != 0.0)
    {
        return a / b;
    }
    else
    {
        cerr << "Division by zero is not allowed." << endl;
        return 0;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter the A value : ";
    cin >> num1;
    cout << "Enter the B value : ";
    cin >> num2;

    cout << "Addition: " << add(num1, num2) << endl;

    cout << "Subtraction: " << subtract(num1, num2) << endl;

    cout << "Multiplication: " << multiply(num1, num2) << endl;

    int resultInt = divide(num1, num2);

    cout << "Integer Division : " << resultInt << endl;

    return 0;
}
