#include <iostream>
using namespace std; 
main()
{
    int E,M,P,C,CS;
    float T,A,PE;
    cout<<"Enter the Marks got in English-:";
    cin>>E;
    cout<<"Enter the Marks got in Maths-:";
    cin>>M;
    cout<<"Enter the Marks got in Physics-:";
    cin>>P;
    cout<<"Enter the Marks got in Chemistry-:";
    cin>>C;
    cout<<"Enter the Marks got in Computer Science-:";
    cin>>CS;
    cout<<"Enter The Total Number of Marks anyone can achieve-:";
    cin>>T;
    A=E+M+P+C+CS;
    PE=(A*100)/T;
    if (PE>100)
    {
        cout<<"May be you have entered the wrong values.."; 
    }
    else
    {
        cout<<"Percentage you achieved is-:"<<PE;
    }
        
}