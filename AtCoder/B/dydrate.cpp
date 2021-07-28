#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    int x=a,y=0;
    while(x>y*d){
        x+=b;
        y+=c;
        ans++;
        if(ans==1e5) break;
    }
    if(ans==1e5) cout<<-1<<endl;
    else cout<<ans<<endl;
}
