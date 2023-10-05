#include<bits/stdc++.h>
using namespace std;

void priortyqueue(){
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);
    cout<<pq.top();
    
    pq.pop();
    cout<<pq.top();

}
int main(){
    priortyqueue();
    return 0;
}