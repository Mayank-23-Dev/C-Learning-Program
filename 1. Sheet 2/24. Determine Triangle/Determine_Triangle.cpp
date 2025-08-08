#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            cout << "The triangle is equilateral." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "The triangle is isosceles." << endl;
        }
        else
        {
            cout << "The triangle is scalene." << endl;
        }
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
}
