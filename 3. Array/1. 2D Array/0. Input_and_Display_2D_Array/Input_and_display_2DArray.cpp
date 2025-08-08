#include <iostream>
using namespace std;
int main()
{
    int i,j,n1,n2;
    cout<<"How many Rows Do you Want-:";
    cin>>n1;
    cout<<"How many Columns Do you Want-:";
    cin>>n2;
    int a[n1][n2];
    for (i = 0; i <n1;i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout<<"Enter Element-:";
            cin>>a[i][j];
        }
    }
    for (i = 0; i <n1;i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
}