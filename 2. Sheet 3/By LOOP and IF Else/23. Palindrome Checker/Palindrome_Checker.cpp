#include <iostream>
using namespace std;

int main() 
{
    int n, t, r = 0, d;
    cout << "Enter a number: ";
    cin >> n;
    t = n;
    while (n > 0) 
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (r == t)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";
}