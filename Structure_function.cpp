#include<bits/c++io.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int l;
    int b;
};

int area(struct Rectangle r){
    return r.l*r.b;
}

int perimeter(Rectangle r){
    int p;
    p=2*(r.l+r.b);

    return p;
}
int main(){

    Rectangle r={0,0};

    cout<<"Enter the length and breath: "<<endl;
    cin>>r.l>>r.b;

    int a=area(r);
    int peri=perimeter(r);

    cout<<"The area of rectangle is:"<<a<<endl;
    cout<<"The perimeter of rectangle is:"<<perimeter<<endl;



}