#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string s; cin>>s;
    string s2=s;
    reverse(s.begin(),s.end());
    if(s==s2) cout<<"Palindrome";
    else cout<<"NOT Palindrome";
  return 0;
}