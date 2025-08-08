#include <iostream>
using namespace std;

int main() 
{
    int n, i,j,min,temp;
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
        min=i;
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[min]) 
            {
                min=j;
            }
        }
        if (min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        
    }
    cout << "Sorted Array-:";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
