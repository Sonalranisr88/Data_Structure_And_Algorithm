#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}
