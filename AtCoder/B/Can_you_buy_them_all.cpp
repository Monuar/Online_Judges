#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n+1];
    ll sum=0;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll result=sum-n/2;
    if(result<=x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
