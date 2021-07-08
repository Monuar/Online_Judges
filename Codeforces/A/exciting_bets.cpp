#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<" "<<0<<endl;
        else{
            ll dif=abs(a-b);
            ll x=a%dif;
            ll y=b%dif;
            cout<<dif<<" "<<min(dif-x,x)<<endl;
        }

    }
}
