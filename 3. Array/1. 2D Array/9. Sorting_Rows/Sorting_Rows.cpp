#include <iostream>
using namespace std;
int main()
{
    int i,j,n,temp;
    cout<<"How many Rows ,Columns Do you Want-:";
    cin>>n;
    int a[n][n];
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<"Enter Element-:";
            cin>>a[i][j];
        }
    }
    cout<<"Original Array-:\n";
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"     ";
        }
        cout<<endl;
    }
    for (int k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for ( j = 0; j < n-1; j++)
            {
                temp=a[i][j];
                if (temp>a[i][j+1])
                {
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=temp;
                }
            }
        }
    }
    
    cout<<"Sorted Array-:\n";
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"     ";
        }
        cout<<endl;
    }
    
}