// Call by value
#include<bits/c++io.h>
#include<iostream>

using namespace std;

int add(int a,int b)
{
    int c;
    c=a+b;

    return c;
}

int main(){
    int num1= 10 , num2 =90 , sum;
    sum = add(num1,num2);

    cout<<"The sum of two number is: "<<sum<<endl;
    return 0;
}