#include<bits/stdc++.h>
#define ll long long int
#define md 1e9+7
#define fio  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define deb(x) cout << #x << '=' << x << endl
#define deb2(x, y) cout << #x << '=' << x <<' '<< #y << '=' << y << endl
#define f(i,n) for(long long int i=0;i<n;i++)
using namespace std;
int main()
{
fio
int t;cin>>t;
while(t--)
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a==c and b==d)cout<<0<<"\n";
    else if((a+b)%2==(c+d)%2)
    cout<<2<<"\n";
    else cout<<1<<"\n";
} 
}