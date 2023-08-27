//----------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#define ll long long
#define read_arr(a, n) for(int i=0; i<n; i++) cin >> a[i]
#define write_arr(a, n) for(int i=0; i<n; i++) cout << a[i] << " "
#define read_vec(a, n) for(int i=0; i<n; i++){int temp; cin >> temp; a.push_back(temp);}
#define write_vec(a, n) for(int i=0; i<n; i++) cout << a[i] << " "
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define enter cout << endl << endl
#define pb push_back

using namespace std;
bool even(ll n){return (n%2==0)? true:false;}
bool odd(ll n){return (n%2==1)? true:false;}
bool isPalindrome(int num) {
    int reversed_num = 0, original_num = num;
    while (num > 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }
    return (original_num == reversed_num);
}
ll lcm(ll a, ll b){return (a * b) / __gcd(a, b);}
ll fact (ll n){return (n == 0)? 1:n * fact(n-1);}

//----------------------------------------------------------------------------------------------------------------

void solve(){
    int n, x, k; cin >> n >> x >> k;
    vector<int> a, b;
    read_vec(a, n);
    read_vec(b, n);
    int c = 0;
    for(int i=0; i<n; i++){
        if(abs(a[i] - b[i]) <= k) c++;
    }
    if(c >= x) cout << "yes\n";
    else cout << "no\n";
}
int main(){
    int t; cin >> t;
    while(t--) solve();
}
