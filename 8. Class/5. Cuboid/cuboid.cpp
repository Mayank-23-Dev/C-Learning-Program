#include <iostream>
using namespace std;
class cuboid
{
    int width, length, height;
    public:
    void getdata();
    int calarea();
    int calvolume();
};
void cuboid::getdata()
{
    cout<<"Enter Width-:";
    cin>>width;
    cout<<"Enter Length-:";
    cin>>length;
    cout<<"Enter Height-:";
    cin>>height;
}
int cuboid::calarea()
{
    return 2*(length*width+width*height+height*length);
}
int cuboid::calvolume()
{
    return (length*width*height);
}
main()

{
    cuboid obj;
    obj.getdata();
    int res=obj.calarea();
    cout<<"Area = "<<res<<" m²"<<endl;
    int res1=obj.calvolume();
    cout<<"Volume = "<<res1<<" m³"<<endl;
}