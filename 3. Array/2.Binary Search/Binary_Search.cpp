using namespace std;
#include<iostream>
int main()
{
    int size,low, high, mid, i ,ele;
    cout<<"Input the Size of the Array-:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the Element-:";
        cin>>arr[i];
    }
    low=0;
    high=size-1;
    mid=-1;
    cout<<"Enter the Element to be searched-:";
    cin>>ele;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==ele)
        {
            break;
        }
        else if (arr[mid]>ele)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (low>high)
    {
        cout<<"Element Not Found";
    }
    else
    {
        cout<<"The Indexing Number of the number "<<ele<<" is "<<mid;
    }
}