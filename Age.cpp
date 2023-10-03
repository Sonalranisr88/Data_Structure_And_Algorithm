#include<bits/stdc++.h>
using namespace std;

int main(){
int x;
cin>>x;
if(x<18){
    cout<<"Not Adult"<<endl;     
}
else if(x==18){
    cout<<"Equal to 18"<<endl;
}
else{
    cout<<"Adult";
}
return 0;
};