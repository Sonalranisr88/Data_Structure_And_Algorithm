#include<bits/c++io.h>
#include<iostream>

using namespace std;

struct Rectangle
{
    int l;
    int b;
    int c;
};

int main()
{
    struct Rectangle r={10,5};

    r.l =15;
    r.b=7;
    
    cout<<sizeof(r)<<endl;
    cout<<r.l<<endl;
    cout<<r.b<<endl;


}
