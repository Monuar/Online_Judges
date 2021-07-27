#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=100;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            ans+=(sum+j);
        }
        sum+=100;

    }
    cout<<ans<<endl;
}

