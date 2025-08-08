#include <iostream>
using namespace std;
int main()
{
    int i,j,n,m,sum=0,y,up=0;
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
    cout<<"Upper Triangular Matrix-:"<<endl;
    for (i = 0; i <n;i++)
    {
        {
            if (i!=0)
            {
                for ( int k = 1; k <=i; k++)
                {
                    cout<<"    ";
                }
            }
            for (j = 0; j<=m-1; j++)
            {
                if (j>=i)
                {
                    up+=a[i][j];
                    cout<<a[i][j]<<"   ";
                } 
            }
            cout<<endl;
        }
    }
    cout<<"Sum of all Upper Triangular Elements-:"<<up;
}