#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("Character.txt");
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    fp << ch;
    cout << "Character written to file successfully." << endl;
    fp.close();
}