#include <iostream>
using namespace std;
int main()
{
    int n,sum,a;
    cout<<"Enter The Number from where you want to add-:";
    sum=0;
    cin>>a;
    cout<<"Enter The Number till where you want to add-:";
    cin>>n;
    for (a;a<=n;a++)
    {
        sum=sum+a;
    }
    cout<<"Sum of First "<<n<<" is "<<sum;
}