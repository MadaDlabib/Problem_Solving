#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
    	string s; cin>>s;
    	sort(s.rbegin(),s.rend());
    	cout<<s<<endl;
    }
    return 0;
   }

