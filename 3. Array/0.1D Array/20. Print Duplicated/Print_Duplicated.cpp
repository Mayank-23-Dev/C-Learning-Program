#include <iostream>
using namespace std;

int main() 
{
    int n, y, count = 0;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int arr[n];
    int ar[n]={};
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) 
    {
        if (ar[i] == 1)
            continue;

        y = arr[i];
        count = 1;

        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] == y) 
            {
                count++;
                ar[j] = 1;
            }
        }

        cout << "Number " << y << " Occurs: " << count << " times" << endl;
    }
}
