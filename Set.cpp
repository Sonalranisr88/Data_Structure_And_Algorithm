#include<bits/stdc++.h>
using namespace std;

void Setexp(){
    set<int>st;
    st.insert(10);
    st.insert(24);
    st.insert(33);
    st.emplace(4);
    auto it = st.find(24);
    
    st.erase(33);
    int cnt=st.count(1);

}
int main(){
    Setexp();
    return 0;
}