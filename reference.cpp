#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main(){
    int a=10;
    int &r=a;

    int b=90;
    r=b;
    cout<<a<<endl;
    cout<<r<<endl;
}


