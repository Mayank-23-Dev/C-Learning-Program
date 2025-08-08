#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;

    cout << "Your expression will look like ax^2 + bx + c" << endl;
    cout << "Enter coefficient a-: ";
    cin >> a;
    cout << "Enter coefficient b-: ";
    cin >> b;
    cout << "Enter coefficient c-: ";
    cin >> c;

    if (a == 0)
    {
        cout << "This is not a quadratic equation." << endl;
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "r1 = " << r1 << endl;
            cout << "r2 = " << r2 << endl;
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);
            cout << "Roots are real and equal." << endl;
            cout << "r1 = r2 = " << r1 << endl;
        }
        else
        {
            cout << "Roots are complex and imaginary." << endl;
        }
    }
}
