#include <iostream>
using namespace std;
int main()
{
    int n=0,num,i;
    int d;
    cout<<"Enter a Number-:";
    cin>>num;
    cout<<"Enter a Digit-:";
    cin>>d;
    if (num>0)
    {
        while (num>0)
        {
            i=num%10;
            num=num/10;
            if (d==i)
            {
                n++;
            }
        }
    cout<<"The "<<d<<" will occur "<<n<<" Times.";    
    }
}
