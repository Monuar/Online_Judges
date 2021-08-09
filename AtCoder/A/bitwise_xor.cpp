#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    while(1){
       int  d=c^a;
       // cout<<d<<endl;
        if(d==b){
            cout<<c<<endl;
            return 0;
        }
        c++;
    }
}
