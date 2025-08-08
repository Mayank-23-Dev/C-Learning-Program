#include <iostream>
using namespace std;
int main()
{
    int i=0;
    int a;
    cout<<"Enter the Number whose table you want-:";
    cin>>a;
    for (i = 1; i <=10; i++)
    {
        cout<<a<<"X"<<i<<"="<<a*i<<endl; 
    }

}