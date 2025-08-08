#include <iostream>
using namespace std;
int main()
{
    int n=0,i,j,a;
        for (i=1;i<=5;i++)
        {
            for (j=1;j<=i;j++)
            cout<<(i+j+1)%2<<" ";
            cout<<endl;
        }
}