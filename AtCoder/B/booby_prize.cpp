#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    cout<<v[n-2].second<<endl;
}
