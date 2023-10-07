#include<bits/stdc++.h>
using namespace std;

int Armstrong(int n){
    int sum=0;
    int temp=n;
    while(n>0){
        int ld=n%10;
        sum=sum+ld*ld*ld;
        n=n/10;
    }
  
    if( temp==sum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    int n; 
    cin>>n;
    Armstrong(371);
}