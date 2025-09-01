#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    // all divisors number O(n)
    /*for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<" ";
    }*/
    //all divisors number in optimal way O(√n)
    vector<int>divisors;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            divisors.push_back(i);
        if(i!=n/i) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    for(auto x: divisors) cout<<x<<" ";
        
    return 0;
   }

