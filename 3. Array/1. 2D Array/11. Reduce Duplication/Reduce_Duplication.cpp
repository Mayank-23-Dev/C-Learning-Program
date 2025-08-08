#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n,temp,y;
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
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            temp=a[i][j];
            for ( k = j+1; k < n; k++)
            {
                y=a[i][k];
                if (temp==y)
                {
                    for (int p = k; p < n; p++)
                    {
                        a[i][p]=a[i][p+1];
                    }
                    a[i][n-1]=0;
                }
            }
        }
    }
    cout<<"Optimized Array-:\n";
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"     ";
        }
        cout<<endl;
    }
}