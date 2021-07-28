#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2="";
    cin>>s;
    s1=s;
    reverse(s.begin(),s.end());
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cnt++;
        }
        else break;
    }
    for(int i=0;i<s1.size()-cnt;i++){
        s2+=s1[i];
    }
    string s3=s2;
    reverse(s2.begin(),s2.end());
    if(s2==s3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
