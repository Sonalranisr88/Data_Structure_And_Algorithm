#include<bits/stdc++.h>
using namespace std;

int Reverseexp(int n){
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=(rev*10)+ld;
        n=n/10;

    }
    cout<<rev;

}

int main(){
    int n;
    cin>>n;
    Reverseexp(1234);

    return 0;
}