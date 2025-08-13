#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("sent.txt");
    ofstream fp1("Senta.txt");
    char ch;
    while (fp.get(ch)) 
    {
        fp1.put(ch);
    }
    fp.close();
    fp1.close();
    cout << "File copied successfully." << endl;
}