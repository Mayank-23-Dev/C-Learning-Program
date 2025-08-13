#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Sentence.txt");
    char ch;
    int count = 0;
    while (fp.get(ch))
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
            count++;
        else if (ch == '$')
            break;
    }
    cout << "Number of words in the file: " << count + 1 << endl;
    fp.close();
}