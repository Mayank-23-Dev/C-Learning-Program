#include <iostream>
using namespace std;
int main()
{
    int i,j,m,sum=0,y,identity=0,diagonal=0,unit=0,scalar=0,symmetric=0,skewsymmetric=0;
    cout<<"How many Rows,Cloumns Do you Want-:";
    cin>>m;
    int a[m][m];
    for (i = 0; i <m;i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<"Enter Element-:";
            cin>>a[i][j];
        }
    }
    y=a[1][1];
    for (i = 0; i <m;i++)
    {
        for (j = 0; j < m; j++)
        {
            if((i==j && a[i][j]!=1) ||(i!=j && a[i][j]!=0))
            {
                identity=1;
                break;
            }
            if ((i==j && a[i][j]==0) ||(i!=j && a[i][j]!=0))
            {
                diagonal=1;
                break;
            }
            if (a[i][j]!=0)
            {
                unit=1;
                break;
            }
            if ((i==j && a[i][j]!=y) ||(i!=j && a[i][j]!=0))
            {
                scalar=1;
                break;
            }
            if ((a[i][j]!=a[j][i]))
            {
                symmetric=1;
                break;
            }
            if ((i==j && a[i][j]!=0) ||(i!=j && a[i][j]!=-1*(a[j][i])))
            {
                skewsymmetric=1;
                break;
            }
        }
    }
    if (identity!=1)
    {
        cout<<"Identity Matrix"<<endl;
    }
    if (diagonal!=1)
    {
        cout<<"Diagonal Matrix"<<endl;
    }
    if (unit!=1)
    {
        cout<<"Unit Matrix"<<endl;
    }
    if (scalar!=1)
    {
        cout<<"Scalar Matrix"<<endl;
    }
    if (symmetric!=1)
    {
        cout<<"Symmetric Matrix"<<endl;
    }
    if (skewsymmetric!=1)
    {
        cout<<"Skew Symmetric Matrix"<<endl;
    }
}