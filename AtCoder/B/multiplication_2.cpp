#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,p=1e18,ans=1;
    cin>>n;
    ll a[n];
    ll z=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) z=1;
    }
    if(z==1) cout<<0<<endl;
    else{
        for(ll i=0;i<n;i++){
            if(ans<=p/a[i]){
                ans*=a[i];
            }
            else {
                cout<<-1<<endl;
                return 0 ;
            }
        }
        cout<<ans<<endl;
    }
}
