#include <iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char fav;
    float salary;
} ep ;

union data 
{
    ep s;
    s.fav='A';
};

