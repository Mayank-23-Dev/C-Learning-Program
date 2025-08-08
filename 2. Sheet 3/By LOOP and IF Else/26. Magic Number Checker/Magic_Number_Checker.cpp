#include <iostream>
using namespace std;

int main()
{
    int n, t, r = 0, d, p, s = 0;
    cout << "Enter a number: ";
    cin >> n;
    t = n;
    
    while (t > 0) 
    {
        d = t % 10;
        r = r * 10 + d;
        t = t / 10;
    }
    
    p = n * r;
    t = p;

    while (t > 0) 
    {
        d = t % 10;
        s += d;
        t = t / 10;
    }

    if (s == n)
        cout << "Magic Number";
    else
        cout << "Not a Magic Number";
}
