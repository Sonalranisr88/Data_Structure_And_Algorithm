#include<bits/c++io.h>
#include<iostream>

using namespace std;

class rectangle{
public:
int length;
int breath;

void initialization(int l,int b){
    length=l;
    breath=b;
}

int area(){
    return length*breath;
}

int perimeter(){
    int p;
    p=2*(length+breath);

    return p;
}

};

int main(){
    rectangle r;

    int l,b;
    cout<<"Enter the length and breath: "<<endl;
    cin>>l>>b;

    r.initialization(l,b);

    int a=r.area();
    int peri=r.perimeter();

    cout<<"The ares of rectangle is: "<<a<<endl;
    cout<<"The perimeter of rectangle is: "<<peri<<endl;
    return 0;
}