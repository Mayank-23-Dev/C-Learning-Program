#include <iostream>
using namespace std;
int main()
{
    int n=2,i,j,a;
        for (i=1;i<=5;i++)
        {
            a=n;
            for (j=1;j<=i;j++)
            cout<<a++<<" ";
            cout<<endl;
            n++;

        }
        
}