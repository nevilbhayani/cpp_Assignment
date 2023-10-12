#include <iostream>
using namespace std;

class Triangle
{
public:
    static int calculateArea(int base, int height)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    int base, height;

    cout << "Enter the base : ";
    cin >> base;

    cout << "Enter the height : ";
    cin >> height;

    int area = Triangle::calculateArea(base, height);

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
