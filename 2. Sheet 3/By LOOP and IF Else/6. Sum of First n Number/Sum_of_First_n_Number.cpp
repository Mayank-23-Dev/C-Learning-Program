#include <iostream>
using namespace std;
int main()
{
    int n,sum,a;
    cout<<"Enter Term till you want to add-:";
    sum=0;
    cin>>n; 
    for (a=1;a<=n;a++)
    {
        sum=sum+a;
    }
    cout<<"Sum of First "<<n<<" is "<<sum;
}