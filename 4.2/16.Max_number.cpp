#include <iostream>
using namespace std;

class Test
{
private:
    int x, y;

public:
    void input()
    {
        cout << "enter the two number :";
        cin >> x >> y;
    }
    friend void find(Test t);
};

void find(Test t)
{
    if (t.x > t.y)
    {
        cout << "largest is :" << t.x;
    }
    else
    {
        cout << "largest is " << t.y;
    }
}
int main()
{
    Test t;
    t.input();
    find(t);
    return 0;
}