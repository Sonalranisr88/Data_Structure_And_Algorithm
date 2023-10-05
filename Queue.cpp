#include<bits/stdc++.h>
using namespace std;

void queuexp(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back()+=5;
    cout<<q.back();
    cout<<q.front();
    q.pop();
    cout<<q.front();

}
int main(){
    queuexp();
    return 0;
}