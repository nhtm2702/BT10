#include <iostream>
using namespace std;
struct Point
{
    double x;
    double y;
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
    Point() {}
};

int main()
{
    Point a(1,2);
    cout << &a << " " << &a.x << " " << &a.y;
    // dia chi cua a trung voi a.x, a.x va a.y cach nhau 8 bit
}

