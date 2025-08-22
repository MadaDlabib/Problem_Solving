#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	vector<int>v(n);
    	
    	for(int i=0; i<n; i++){
    		cin>>v[i];
    		
    	}
    	
    	cout<<min(2*v[0],v[0]+v[1])<<endl;
    }
    return 0;
   }

