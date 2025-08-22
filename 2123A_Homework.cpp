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
        string sn; cin>>sn;
        int m; cin>>m;
        string sm; cin>>sm;
        string s; cin>>s;
        for(int i=0; i<m; i++){
            if(s[i]=='D'){
                sn+=sm[i];
            }else{
                sn=sm[i]+sn;
            }
        }
        cout<<sn<<endl;
    }
    return 0;
   }