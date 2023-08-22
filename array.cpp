#include<stdio.h>
#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin >>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
    cout<<"The sum of elemenys are: "<<sum<<endl;
    return 0;

}