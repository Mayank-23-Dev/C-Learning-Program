#include <iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"Enter the Number till you want to add-:";
    cin>>a;
    int count=0;
    int z;
    if (a>0)
    {
        for (n=1;n<=a;n++)
        {
            z=n*n;
            count=count+z;
        }
        cout<<"The Sum of Squares of first n natural Numbers-:"<<count;
    }
    else
    {
        cout<<"Invalid Entry";
    }
    
    
}