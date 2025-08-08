#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"1-Monday"<<endl<<"2-Tuesday"<<endl<<"3-Wednesday"<<endl<<"4-Thursday"<<endl<<"5-Friday"<<endl<<"6-Saturday"<<endl<<"7-Sunday"<<endl<<"Enter a Number-:";
    cin>>a;
    if (a==1)
    {
        cout<<"The Day will be Monday.";
    }
    else if (a==2)
    {
        cout<<"The Day will be Tuesday.";
    }
    else if (a==3)
    {
        cout<<"The Day will be Wednesday.";
    }
    else if (a==4)
    {
        cout<<"The Day will be Thursday.";
    }
    else if (a==5)
    {
        cout<<"The Day will be Friday.";
    }
    else if (a==6)
    {
        cout<<"The Day will be Saturday.";
    }
    else if (a==7)
    {
        cout<<"The Day will be Sunday.";
    }
    else
    {
        cout<<"May be you have entered the wrong values.";
    }
    
    
}