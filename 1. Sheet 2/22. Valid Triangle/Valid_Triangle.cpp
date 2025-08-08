#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3;

    cout << "Enter three angles of a triangle: ";
    cin >> a1 >> a2 >> a3;

    if (a1 > 0 && a2 > 0 && a3 > 0 && (a1 + a2 + a3 == 180))
    {
        cout << "The triangle is valid." << endl;
    }
    else
    {
        cout << "The triangle is not valid." << endl;
    }
}
