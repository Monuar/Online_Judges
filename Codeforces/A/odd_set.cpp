#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int x=2*n;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
            if(a[i]%2!=0) cnt++;
        }
        if(cnt>0&&cnt%n==0){
            cnt=cnt/n;
            if(cnt%2!=0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
    }
}
