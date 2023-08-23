#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;


    int smallest =INT16_MAX;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"The smallest element in this array is: "<<smallest;
}