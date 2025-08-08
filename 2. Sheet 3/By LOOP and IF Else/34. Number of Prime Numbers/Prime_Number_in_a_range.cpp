#include <iostream>
using namespace std;
int main()
{
    int n,count=0,b,i,a;
    cout<<"Enter the Starting Range Number-:";
    cin>>n;
    cout<<"Enter the Ending Range Number-:";
    cin>>b;
    for (i = n; i <= b; i++)
    {
        a=i;
        while ()
            {
                if (i%a==0)
                {
                    break;
                }
                else
                {
                    a++;
                }
            }
            if (a>=2 && a<=(i-1))
            {
                count+=0;
            }
            else
            {
                count+=1;
            }   
    }
    cout<<"The Total Number of Prime Numbers in Range "<<n<<" to "<<b<<" is "<<count;      
}