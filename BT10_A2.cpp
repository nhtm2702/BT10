#include <iostream>
using namespace std;
struct Point
{
    int x;
    int y;
};

/* truyen kieu tham tri
void print(Point* a)
{
    cout << &a;
}

int main()
{
    Point* a;
    cout << &a << endl;
    print(a);
}*/

/* truyen kieu tham bien
void print(Point* &a)
{
    cout << &a;
}

int main()
{
    Point* a;
    cout << &a << endl;
    print(a);
}*/

