#include <iostream>
using namespace std;

int main()
{
    int f1, i1, f2, i2, ti, tf;

    cout << "Enter the first length:" << endl;
    cout << "Feet: ";
    cin >> f1;
    cout << "Inches: ";
    cin >> i1;

    cout << "Enter the second length:" << endl;
    cout << "Feet: ";
    cin >> f2;
    cout << "Inches: ";
    cin >> i2;

    ti = i1 + i2;
    tf = f1 + f2 + ti / 12;
    ti = ti % 12;

    cout << "The sum of the two lengths is: " << tf << " feet and " << ti << " inches." << endl;

}
