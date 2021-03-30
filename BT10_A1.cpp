#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};

void print(Point a)
{
    cout << a.x << " " << a.y;
}
int main()
{
    Point a;
    int _x,_y;
    cin >> _x >> _y;
    a.x = _x;
    a.y = _y;
    print(a);
}
