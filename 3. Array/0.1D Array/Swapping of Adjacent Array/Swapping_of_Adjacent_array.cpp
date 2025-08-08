#include <iostream>
using namespace std;

int main() 
{
    int n,i,temp,k;
    cout<<"Enter the size of Array (Pls Enter Even Number)-:";
    cin>>n;
    int ar[n]={};
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Elements of Array-:";
        cin >> ar[i];
    }
    for ( i = 0; i <n; i++)
    {
        temp=ar[i+1];
        ar[i+1]=ar[i];
        ar[i]=temp;
        i++;
    }
    cout<<"Shifted Array-:";
    for (k = 0; k<n; k++)
    {
        cout<<ar[k]<<" ";
    }
    
}