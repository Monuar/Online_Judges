#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        long long x=x2-x1;
        long long y=y2-y1;
        long long ans=1;
        ans+=(x*y);
        cout<<ans<<endl;
    }
    return 0;
}
