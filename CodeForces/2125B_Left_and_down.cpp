#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll int a,b,k;
        cin>>a>>b>>k;
        ll g=__gcd(a, b);
        ll x=a/g, y=b/g;
        if(x<=k and y<=k) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
   }