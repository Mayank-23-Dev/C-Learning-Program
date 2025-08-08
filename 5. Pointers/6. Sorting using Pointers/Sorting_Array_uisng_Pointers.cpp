#include <iostream>
using namespace std;
int main()
{
    int n,i,x,y;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cout << "Enter the element of the array-: ";
        cin >> arr[i];
    }
    int *ptr=arr;
    for ( i = 0; i < n; i++)
    {
        x=*(ptr+i);
        y=*(ptr+i+1);
        if (x > y)
        {
            *(ptr+i) = y;
            *(ptr+i+1) = x;
            i = -1;
        }
    }
    cout<<"\n Sorted Array is-: ";
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
}