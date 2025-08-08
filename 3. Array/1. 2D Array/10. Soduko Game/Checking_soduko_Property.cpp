#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n,temp,y,sudoku=0;
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
    for (i = 0; i < n; i++)  
    {
        for ( j = 0; j < n; j++)
        {
            temp=a[i][j];
            for (k = j+1; k < n; k++)
            {
                y=a[i][k];
                if (temp==y)
                {
                    sudoku=1;
                }
            }
        }
   }
   for (i = 0; i < n; i++)  
    {
        for ( j = 0; j < n; j++)
        {
            temp=a[j][i];
            for (k = j+1; k < n; k++)
            {
                y=a[k][i];
                if (temp==y)
                {
                    sudoku=1;
                }
            }
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
   if (sudoku==1)
   {
    cout<<"Following Matrix is not a Sudoku Matrix.";
   }
   else if (sudoku==0)
   {
    cout<<"Following Matrix is a Sudoku Matrix.";
   }
}