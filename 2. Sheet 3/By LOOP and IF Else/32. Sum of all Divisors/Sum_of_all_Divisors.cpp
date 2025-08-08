#include <iostream>
using namespace std;
int main()
{
    int count=0,a=1,n;
    cout<<"Enter a Number-:";
    cin>>n;
    while (a<=n)
    {   
        if (n%a==0)
        {
            count++;
            a++;
        }
        else
        {
            a++;        
        } 
        count=count+a;
    }
    cout<<"Sum of all Divisors-:"<<count;
}