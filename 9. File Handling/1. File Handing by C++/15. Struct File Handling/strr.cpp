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
    ifstream fp("student.dat", ios::binary);
    char ch;
    int i = 0;
    int count;
    cout << "Enter Number of Students : ";
    cin >> count;
    cout<<endl;
    Student s[count];
    for ( i = 0; i <count; i++)
    {
        fp.read((char*)&s[i], sizeof(s[i]));
        cout<<endl<<"=========================================="<<endl;
        cout<< "Student Details " << i + 1 <<":"<<endl;
        cout<< "Student Roll Number: "<<s[i].roll<<endl;
        cout<< "Student Name: " << s[i].name<<endl;
        cout<< "Student Age: " << s[i].age<<endl;
        cout<< "=========================================="<<endl;
    }
    fp.close();
}