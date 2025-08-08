#include <iostream>
using namespace std;
class Candidate
{
    long RNo;
    string Name;
    int Charges;
    int Days;
    int Price;
    void COMPUTE()
    {
        Price=Charges*Days;
        if (Price>=11000)
        {
            Price=(1.02)*Price;
        }
        
    }
    public:
    void GetInfo()
    {
        char ignore[2];
        cout<<"Enter the Room Number-: ";
        cin>>RNo;
        cin.getline(ignore,1);
        cout<<"Enter the Name-: ";
        cin>>Name;
        cout<<"Enter the Charges-: ";
        cin>>Charges;
        cout<<"Enter the Days-: ";
        cin>>Days;
        if (Days<0)
        {
            cout<<"Invalid Days Found. :)"<<endl;
        }
        
        COMPUTE();
    }
    void DispInfo()
    {
        cout<<"| Room Number | \t |    Name    | \t | Charges |\t |Days| \t | Price |"<<endl;
        cout<<"| "<<RNo<<"           | \t | "<<Name<<"       | \t | "<<Charges<<" |\t | "<<Days<<"  | \t | "<<Price<<" |"<<endl;
    }
};
main()
{
    Candidate stu;
    stu.GetInfo();
    stu.DispInfo();
}