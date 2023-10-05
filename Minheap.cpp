#include<bits/stdc++.h>
using namespace std;

void priorty(){
    priority_queue<int ,vector<int>, greater<int>>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);
    cout<<pq.top();
    
    pq.pop();
    cout<<pq.top();

}
int main(){
    priorty();
    return 0;
}