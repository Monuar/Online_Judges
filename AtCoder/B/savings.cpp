#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll i=1;
    ll sum=0;
    while(sum<n){
        sum+=i;
        i++;
    }
    cout<<i-1<<endl;
}
