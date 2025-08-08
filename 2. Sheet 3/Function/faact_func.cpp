#include <iostream>
using namespace std;
int fact(int x)
{
    if (x==0)
    {
        return 0;
    }
    else if (x==1)
    {
        return 1;
    }
    
    return x*fact(x-1);
}
int main()
{
    int a;
    cout<<"Enter the Number-:";
    cin>>a;
    if (a>=0)
    {
        cout<<fact(a);
    }
    else
    {
        cout<<"Pls Enter Correct Values.";
    }

}