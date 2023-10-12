#include <iostream>
using namespace std;

class Calculator
{
private:
    int num1;
    int num2;

public:
    Calculator(double a, double b)
    {
        num1 = a;
        num2 = b;
    }

    int add()
    {
        return num1 + num2;
    }

    int subtract()
    {
        return num1 - num2;
    }

    int divide()
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            cerr << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    int multiply()
    {
        return num1 * num2;
    }
};

int main()
{
    int num1, num2;

    cout << "Enter the A value : ";
    cin >> num1;
    cout << "Enter the B value : ";
    cin >> num2;

    Calculator calc(num1, num2);

    cout << "add : " << calc.add() << endl;
    cout << "sub : " << calc.subtract() << endl;
    cout << "multi : " << calc.multiply() << endl;
    cout << "div : " << calc.divide() << endl;

    return 0;
}
