#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
public:
    static int calculateArea(int radius)
    {
        return M_PI * radius * radius;
    }
};

int main()
{
    int radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    int area = Circle::calculateArea(radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
