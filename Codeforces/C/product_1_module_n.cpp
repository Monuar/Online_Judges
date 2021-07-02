#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=1;i<n;i++){
        if(__gcd(n,i)==1) v.push_back(i);
    }
    ll m=1;
    for(int i=0;i<v.size();i++){
        m=(v[i]*m)%n;
    }
    if(m==1) {
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<v.size()-1<<endl;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==m) continue;
            cout<<v[i]<<" ";
        }
    }
}
