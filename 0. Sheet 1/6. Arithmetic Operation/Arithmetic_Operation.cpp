#include <iostream>
using namespace std;
main()
{
    int a,b,c;
    float d;
    cout<<"Enter the First Number-:";
    cin>>a;
    cout<<"Enter the Second Number-:";
    cin>>b;
    cout<<"Addition->(1)"<<endl<<"Subtraction->(2)"<<endl<<"Multiplication->(3)"<<endl<<"Division->(4)"<<endl<<"Remainder->(5)"<<endl<<"Enter the Operator as per its repective Number-:";
    cin>>c;
        if (c=1)
        {
            d=a+b;
        }
        else if (c=2)
        {
            d=a-b;
        }
        else if (c=3)
        {
            d=a*b;
        }
        else if (c=4)
        {
            d=a/b;
        }
        else if (c=5)
        {
            d=a%b;
        }
        else
        {
            cout<<"Sorry You have entered the wrong Values..";
        }
    cout<<"The Answer of this Expression is-:"<<d; 
}