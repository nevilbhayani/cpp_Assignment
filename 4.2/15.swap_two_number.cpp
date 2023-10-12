#include<iostream>
using namespace std;

template<class T>
int swap_number(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
int main()
{
    int a,b;
    a = 20,b=10;

    swap_number(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

