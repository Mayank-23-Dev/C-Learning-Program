#include <iostream>
using namespace std;

int main()
{
    int a, b, n, t, r, d, p, s;
    cout << "Enter from where your Range Starts-: ";
    cin >> a;
    cout << "Enter from where your Range Ends-: ";
    cin >> b;

    for (n = a; n <= b; n++)
    {
        t = n;
        r = 0;
        while (t > 0)
        {
            d = t % 10;
            r = r * 10 + d;
            t = t / 10;
        }

        p = n * r;
        t = p;
        s = 0;

        while (t > 0)
        {
            d = t % 10;
            s += d;
            t = t / 10;
        }

        if (s == n)
            cout << n<<endl;
    }
}
