#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++){
        ans=(ans*i);
    }
    return ans;
}
int main()
{
    int n,ans=0;
    cin>>n;
    int a[13];
    int i;
    for(i=1;i<=12;i++){
       a[i]=fact(i);
    }
    while(n)
    {
        int i;
        for(i=1;i<=12;i++ ){
            if(a[i]>n) break;
        }
        i--;
        ans+=(n/a[i]);
        n%=a[i];
    }
    cout<<ans<<endl;
}
