#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cout << "Enter the element of the array-: ";
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "The elements of the array are-:\n";
    for (i = 0; i < n; i++)
    {
        cout << *(ptr + i) << "\t";
    }
}