#include<bits/c++io.h>
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the element size: ";
    cin>>n;

    int largest =INT16_MIN;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<"The largest element is: "<<largest;

    
    
}
