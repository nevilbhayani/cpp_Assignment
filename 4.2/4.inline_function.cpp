#include <iostream>
using namespace std;

inline int multiBy2(int num) 
{
    return num * 2;
}


inline int cubicValue(int num) 
{
    return num * num * num;
}

int main() 
{
    int num;


    cout << "Enter the value : ";
    cin >> num;


    int resultMultiply = multiBy2(num);
    cout << "Multiplication by 2: " << resultMultiply << endl;


    int resultCubic = cubicValue(num);
    cout << "Cubic value: " << resultCubic << endl;

    return 0;
}