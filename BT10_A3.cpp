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

Point mid_point(const Point &a, const Point &b)
{
    Point kq;
    kq.x = (a.x + b.x) / 2;
    kq.y = (a.y + b.y) / 2;
    return kq;
}

int main()
{
    Point a(1,2),b(2,3),kq;
    kq = mid_point(a,b);
    cout << kq.x << " " << kq.y;
}

