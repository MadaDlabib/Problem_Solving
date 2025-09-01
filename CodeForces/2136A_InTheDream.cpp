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
    	vector<ll> v(n);
    	for(int i=0; i<n; i++){
    		cin>>v[i];
    	}
    	sort(v.begin(),v.end());
    	ll sum=0;
    	for(int i=n-1; i>=0; i-=2){
    		sum+=v[i];

    	}
    	cout<<sum<<endl;
    }
    return 0;
   }

