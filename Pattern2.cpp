#include<bits/stdc++.h>
using namespace std;

void print( int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    print(n);
}