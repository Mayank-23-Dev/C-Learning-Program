#include <iostream>
using namespace std;
int main()
{
    int arr[]={6,58,854,69,58,5};
    int sum=0,y=arr[0];
    for (int i=0;i<=5;i++)
    {
        {
            if(y<arr[i])
            {
                y=y;
            }
            else
            {
                y=arr[i];
            }
        }
    }
    cout<<y;
}