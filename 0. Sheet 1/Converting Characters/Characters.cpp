#include <iostream>
using namespace std;
int main()
{
    char ch,ch1,ch2,ch3,ch5;
    cout<<"Enter the Character-:";
    cin>>ch;
    int ch4=ch;
    ch2=ch+1;
    ch3=ch+2;
    ch5=ch+3;
    ch1=ch+4;
    cout<<"The Next Four Characters will be-:"<<char(ch2)<<","<<char(ch3)<<","<<char(ch5)<<","<<char(ch1);
}