#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.size()==4){
            cout<<'R'<<s[2]<<s[3];
            int ans=0;
            for(int i=0;i<s.size()-2;i++){
                ans=ans*26+s[i]-'A'+1;
            }
            cout<<'C'<<ans<<endl;
        }
        else{
            int ans=0,k=1;
           for(int i=4;i<s.size();i++){
                int x=s[i]-'0';
                ans+=x*k;
                k*=10;
           }
           char c1='A'+((ans/26)-1);
           char c2='A'+((ans%26)-1);
           cout<<c1<<c2<<s[1]<<s[2]<<endl;
        }
    }
}
