#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m,sum=0,y;
    cout<<"How many Rows Do you Want-:";
    cin>>n;
    cout<<"How many Columns Do you Want-:";
    cin>>m;
    int a[n][m];
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<"Enter Element-:";
            cin>>a[i][j];
        }
    }
    int ar[m][n];
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < m; j++)
        {
            y=a[i][j];
            ar[j][i]=y;
        }
    }
    cout<<"Original Matrix-:"<<endl;
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix-:"<<endl;
    for (i = 0; i <m;i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<ar[i][j]<<"   ";
        }
        cout<<endl;
    }
}