#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, t, d, s = 0, c = 0;
    cout << "Enter a number: ";
    cin >> n;
    t = n;
    while (t > 0)
    {
        d = t % 10;
        float p=pow(d,3);
        s +=p;
        t /= 10;
    }

    if (s == n)
    {
        cout << "Armstrong Number";
    }
    else
        cout << "Not an Armstrong Number";
}
