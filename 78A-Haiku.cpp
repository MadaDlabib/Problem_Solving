#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    int counts1=0, counts2=0, counts3=0;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='a' or s1[i]=='e' or s1[i]=='i' or
            s1[i]=='o' or s1[i]=='u' )
            counts1++;
    }
     for(int i=0; i<s2.size(); i++){
        if(s2[i]=='a' or s2[i]=='e' or s2[i]=='i' or
            s2[i]=='o' or s2[i]=='u' )
            counts2++;
    }
     for(int i=0; i<s3.size(); i++){
        if(s3[i]=='a' or s3[i]=='e' or s3[i]=='i' or
            s3[i]=='o' or s3[i]=='u' )
            counts3++;
    }
    if(counts1==5 and counts2==7 and counts3==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
   }