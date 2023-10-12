#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    int divide(int num1, int num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cerr << "Error: Division by zero!" << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;
    int num1, num2;


    cout << "Enter the A value : ";
    cin >> num1;
    cout << "Enter the B value : ";
    cin >> num2;


    cout << "add: " << calculator.add(num1, num2) << endl;
    cout << "sub: " << calculator.subtract(num1, num2) << endl;
    cout << "multi: " << calculator.multiply(num1, num2) << endl;
    cout << "div: " << calculator.divide(num1, num2) << endl;

    return 0;
}
