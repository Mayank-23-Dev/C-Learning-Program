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

    int in[n1 < n2 ? n1 : n2];
    for (i = 0; i < n1; i++) 
    {
        for (j = 0; j < n2; j++) 
        {
            if (a[i] == b[j]) 
            {
                int f = 0;
                for (int x = 0; x < k; x++) 
                {
                    if (in[x] == a[i]) 
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                    in[k++] = a[i];
            }
        }
    }

    cout << "Intersection of Arrays-:";
    for (i = 0; i < k; i++) 
    {
        cout << in[i] << " ";
    }
}
