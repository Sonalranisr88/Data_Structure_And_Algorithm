#include<bits/c++io.h>
#include<iostream>

using namespace std;


void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){

    int num1=90,num2=88;
    cout<<"Before swapping: "<<num1<<" " <<num2<<endl;
    swap(num1,num2);
    cout<<"After swapping: "<<num1<<" " <<num2<<endl;
    return 0;
}