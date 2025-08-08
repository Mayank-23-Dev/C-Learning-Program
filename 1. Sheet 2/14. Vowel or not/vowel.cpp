#include <iostream>
using namespace std;
main()
{
    char a;
    cout<<"Enter a alphabet-:";
    cin>>a;
    if ((a>='a' && a<='z') or (a>='A' && a<='Z'))
    {
        if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        {
            cout<<"Alphabet "<<a<<" is a Vowel.";
        }
        else
        {
            cout<<"Alphabet "<<a<<" is Consonent.";;
        }
    }
    else
    {
        cout<<"May be you have entered the wrong Values";
    }

}