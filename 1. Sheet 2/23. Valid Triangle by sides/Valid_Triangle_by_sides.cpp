#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
}
