#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter a and b values:";
    cin>>a>>b;

    cout<<"Before swapping: "<<a<<b<<endl;;

    int temp=a;
    a=b;
    b=temp;

    cout<<"After swapping: "<<a<<b<<endl;

}