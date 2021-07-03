#include<bits/stdc++.h>
#define ll long long
using namespace std;
string int_to_binary(ll n)
{
    string s="";
    while(n){
        ll x=n%2;
        s+=(x+'0');
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        ll x=__builtin_popcount(n);
        string s=int_to_binary(n);
        cout<<"The parity of "<<s<<" is "<<x<<" (mod 2)."<<endl;
    }
}
