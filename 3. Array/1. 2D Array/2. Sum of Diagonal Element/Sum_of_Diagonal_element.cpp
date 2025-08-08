#include <iostream>
using namespace std;
int main()
{
    int i,j,n,sum=0,y;
    cout<<"How many Rows,Columns Do you Want-:";
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
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i==j)
            {
                y=a[i][j];
                sum+=y;
            }
            else if ((i+j)==n-1)
            {
                y=a[i][j];
                sum+=y;
            }
        }    
    }
    cout<<"Sum of all the elements of Array Will be-:"<<sum;
}