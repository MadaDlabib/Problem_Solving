#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
    	ll n; cin>>n;
    	ll ans=1;
    	while(n>3){
    		n/=4;
    		ans*=2;
    	}
    	cout<<ans<<endl;
    }
    return 0;
   }

