#include <iostream>
using namespace std;
class Candidate
{
    long RNo;
    float Score;
    string Name;
    string Remarks;
    void AssignRem()
    {
        if (Score>=50 && Score <=100)
        {
            Remarks="Selected";
        }
        else if (Score<=50 && Score >=0)
        {
            Remarks="Not Selected";
        }
        else
        {
            Remarks="Invalid Score Found";
        }
    }
    public:
    void enter()
    {
        char ignore[2];
        cout<<"Enter the Roll Number-: ";
        cin>>RNo;
        cin.getline(ignore,1);
        cout<<"Enter the Name-: ";
        cin>>Name;
        cout<<"Enter the Score-: ";
        cin>>Score;
        AssignRem();
    }
    void display()
    {
        cout<<"| Roll Number | \t |    Name    | \t | Score |\t |   Remarks    |"<<endl;
        cout<<"| "<<RNo<<"           | \t | "<<Name<<"       | \t |   "<<Score<<"  |\t | "<<Remarks<<" |"<<endl;
    }
};
main()
{
    int n;
    cout<<"Enter the Number of Entries-: ";
    cin>>n;
    Candidate stu[n];
    for (int i = 0; i < n; i++)
    {
        stu[i].enter();
    }
    for (int i = 0; i < n; i++)
    {
        stu[i].display();
    }
}