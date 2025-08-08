#include <iostream>
using namespace std;
int main()
{
    cout<<"1-Monday"<<endl<<"2-Tuesday"<<endl<<"3-Wednesday"<<endl<<"4-Thursday"<<endl<<"5-Friday"<<endl<<"6-Saturday"<<endl<<"7-Sunday"<<endl<<"Enter a Number-:";
    int a;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"The Day will be Monday.";
        break;
    case 2:
        cout<<"The Day will be Tuesday.";
        break;
    case 3:
        cout<<"The Day will be Wednesday.";
        break;
    case 4:
        cout<<"The Day will be Thursday.";
        break;
    case 5:
        cout<<"The Day will be Friday.";
        break;
    case 6:
        cout<<"The Day will be Saturday.";
        break;
    case 7:
        cout<<"The Day will be Sunday.";
        break;
    default:
        cout<<"May be you have entered the wrong values.";
    }
}