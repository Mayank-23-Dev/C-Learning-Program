#include <iostream>
using namespace std;
int main()
{
    int n=0,num,i;
    cout<<"Enter a Number-:";
    cin>>num;
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    if (num>0)
    {
        while (num>0)
        {
            i=num%10;
            num=num/10;
            switch (i)
            {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
                break;            
            default:
                break;
            }
        }
        if(c0>0)
        {cout<<"The Number 0 will occur-:"<<c0<<endl;}
        if(c1>0)
        {cout<<"The Number 1 will occur-:"<<c1<<endl;}
        if(c2>0)
        {cout<<"The Number 2 will occur-:"<<c2<<endl;}
        if(c3>0)
        {cout<<"The Number 3 will occur-:"<<c3<<endl;}
        if(c4>0)
        {cout<<"The Number 4 will occur-:"<<c4<<endl;}
        if(c5>0)
        {cout<<"The Number 5 will occur-:"<<c5<<endl;}
        if(c6>0)
        {cout<<"The Number 6 will occur-:"<<c6<<endl;}
        if(c7>0)
        {cout<<"The Number 7 will occur-:"<<c7<<endl;}
        if(c8>0)
        {cout<<"The Number 8 will occur-:"<<c8<<endl;}
        if(c9>0)
        {cout<<"The Number 9 will occur-:"<<c9<<endl;}        
}
}