#include <iostream>
using namespace std;

int main() 
{
    int n, t;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number: ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[i] < a[j]) 
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    cout << "Sorted Array-:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
