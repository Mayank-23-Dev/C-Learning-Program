#include <iostream>
using namespace std;
int main()
{
    int count=0,a=1,n;
    cout<<"Enter a Number-:";
    cin>>n;
    cout<<"The Divisors of the Numbers will be ";
    while (a<=n)
    {   
        if (n%a==0)
        {
            cout<<n<<" is divisible by "<<a<<endl;
            count++;
            a++;
        }
        else
        {
            a++;        
        } 
    }
    cout<<count;
}