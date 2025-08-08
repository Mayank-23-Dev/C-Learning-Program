#include <iostream>
using namespace std;
int main()
{
    int u,q,t,d,n;
    cout<<"Enter the Unit Price-:";
    cin>>u;
    cout<<"Enter the Quantity of a Product-:";
    cin>>q;
    t=u*q;
    if (u>0 and q>0)
    {
        if (t>18000)
        {
            d=30;
            n=(t*70)/100;
            cout<<"Hurray! You got 30% Discout."<<endl;
            cout<<"Net Unit Price-:"<<t<<endl;
            cout<<"Discout Applied-:"<<d<<"%"<<endl;
            cout<<"Final Net Price-:"<<n<<endl;
        }
        else if (t<=18000)
        {
            d=10;
            n=(t*90)/100;
            cout<<"Hurray! You got 90% Discout."<<endl;
            cout<<"Net Unit Price-:"<<t<<endl;
            cout<<"Discout Applied-:"<<d<<"%"<<endl;
            cout<<"Final Net Price-:"<<n<<endl;
        }
        else
        {
            cout<<"I think there is a issue in our End.";
        }
    }
    else
    {
        cout<<"May have you have entered wrong Values.";
    }
        
    
}