#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,even=0,odd=0;
        cin>>n;
        int x=2*n;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
            if(a[i]%2!=0) odd++;
            else even++;
        }
        if(even==odd) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
