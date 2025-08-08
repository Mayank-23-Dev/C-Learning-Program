#include <iostream>
using namespace std;

int main() 
{
    int n,n1,i,j,temp;
    cout<<"Enter the size of First Array-:";
    cin>>n;
    int a[n]={};
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number for First Array-:";
        cin >> a[i];
    }
    cout<<"Enter the Times you want to rotate Array-:";
    cin>>n1;
    for ( j = 1; j <=n1; j++)
    {
        temp=a[n-1];
        for (i=n-2; i>=0; i--)
        {
            a[i+1]=a[i];
        }
        a[0]=temp;
    }
    cout<<"Rotated Array-:";
    for ( i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    } 
}