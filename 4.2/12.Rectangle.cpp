#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l,int b) : length(l), breadth(b) {}

   int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    int length, breadth;

    cout << "Enter the length : ";
    cin >> length;

    cout << "Enter the breadth : ";
    cin >> breadth;

    Rectangle rect(length, breadth);
    int area = rect.calculateArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
