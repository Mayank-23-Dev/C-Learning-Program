#include <iostream>
using namespace std;
int main()
{
    int cp,sp,p;
    cout<<"Enter Cost Price-:";
    cin>>cp;
    cout<<"Enter Selling Price-:";
    cin>>sp;
    if (sp>cp)
    {
        p=sp-cp;
        cout<<"You have gain Profit of "<<p<<".";
    }
    else if (cp>sp)
    {
        p=cp-sp;
        cout<<"You lost "<<p<<".";
    }
    else
    {
        cout<<"May be you have entered wrong values.";
    }
    
    

}