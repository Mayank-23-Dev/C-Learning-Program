#include <iostream>
using namespace std;

int main() 
{
    int n, i, j, f, s = 0;
    cout << "Enter the size of Array-:";
    cin >> n;
    int ar[n];
    for (i = 0; i < n; i++) 
    {
        cout << "Enter the Elements of Array-:";
        cin >> ar[i];
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] != 0)
        {
            f = 1;
            for (j = 1; j <= ar[i]; j++)
            {
                f = f * j;
            }
            s = s + f;
        }
    }
    cout << "Sum of Factorials is-:" << s;
}
