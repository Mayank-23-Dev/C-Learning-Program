#include <iostream>
using namespace std;

int main() 
{
    int n, t, r = 0, d;
    cout << "Enter a Number-:";
    cin >> n;
    t = n;
    while (n > 0) 
    { 
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    cout << "The reversed number of " << t << " is " << r<<".";
}
