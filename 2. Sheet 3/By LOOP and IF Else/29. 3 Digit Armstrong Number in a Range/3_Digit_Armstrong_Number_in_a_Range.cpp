#include <iostream>
#include <cmath>
using namespace std;
void armstrong() 
{
        int a, b, n, t, d, s;
        cout << "Enter from where your Range Starts-: ";
        cin >> a;
        cout << "Enter from where your Range Ends-: ";
        cin >> b;
        for (n = 100; n <= b; n++)
        {
        t = n;
        s = 0;
        while (t > 0)
        {
            d = t % 10;
            float p=pow(d,3);
            s +=p;
            t /= 10;
        }

        if (s == n)
            cout << n <<endl;
        }

}
int main()
{
    armstrong();
    char z;
    cout<<"Do you want to run Check another Value?"<<endl<<"Type (y or Y for Yes)"<<endl<<"Type (n or N for No)"<<endl<<"-:";
    cin>>z;
    if (z=='y' || z=='Y')
    {
        main();
    }
    else
    {
        cout<<"Thanks for your Important Time";
    }
}
