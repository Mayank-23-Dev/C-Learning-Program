#include <iostream>
using namespace std;
int main()
{
    int n,sum,a;
    cout<<"Enter Term till you want to add-:";
    sum=0;
    cin>>n; 
    if (n>0)
    {
        for (a=1;a<=n;a++)
        {
            if (a%2==0)
            {
                sum=sum+a;
            }
        }
        cout<<"Sum of First "<<n<<" is "<<sum;
    }
    else
    {
        cout<<"Invalid Entry";
    }
    
        
}