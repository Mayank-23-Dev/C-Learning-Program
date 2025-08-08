#include <iostream>
using namespace std;

int main() 
{
    int n1, n2, i, j, k = 0;
    cout << "Enter size of 1st Array-:";
    cin >> n1;
    int a[n1];
    for (i = 0; i < n1; i++) 
    {
        cout << "Enter Element-:";
        cin >> a[i];
    }

    cout << "Enter size of 2nd Array-:";
    cin >> n2;
    int b[n2];
    for (i = 0; i < n2; i++) 
    {
        cout << "Enter Element-:";
        cin >> b[i];
    }

    int u[n1 + n2];
    for (i = 0; i < n1; i++) 
    {
        u[k++] = a[i];
    }

    for (i = 0; i < n2; i++) 
    {
        int found = 0;
        for (j = 0; j < n1; j++) 
        {
            if (b[i] == a[j]) 
            {
                found = 1;
                break;
            }
        }
        if (found == 0) 
        {
            u[k++] = b[i];
        }
    }

    cout << "Union of Arrays-:";
    for (i = 0; i < k; i++) 
    {
        cout << u[i] << " ";
    }
}
