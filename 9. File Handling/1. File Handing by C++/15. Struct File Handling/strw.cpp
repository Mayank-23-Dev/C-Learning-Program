#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct Student 
{
    int roll;
    char name[30];
    float age;
};
int main()
{
    ofstream fp("student.dat", ios::binary);
    char ch;
    int count, i;
    cout<<"Enter Number of Students-: ";
    cin>>count;
    system("cls");
    cout << "==========================================" << endl;
    cout << "Enter Student Details" << endl;
    cout << "==========================================" << endl;
    cout << endl;
    Student s[count];
    for (i=0;i<count;i++)
    {
        cout<<"Enter Student Roll Number-: ";
        cin>>s[i].roll;
        cin.ignore();
        cout<<"Enter Student Name-: ";
        cin.getline(s[i].name, 30);
        cout << "Enter Student Age-: ";
        cin>>s[i].age;
        fp.write((char*)&s[i],sizeof(s[i]));
        cout<<endl<<"=========================================="<<endl<<"Data written to file successfully."<<endl<<"=========================================="<<endl<<endl;
    }
    fp.close();
}