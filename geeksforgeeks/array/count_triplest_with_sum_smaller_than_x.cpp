#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum,cnt=0;
    cin>>sum;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            int sum1=a[i]+a[l]+a[r];
            cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
            cout<<"sum1 "<<sum1<<endl;
           // if(sum1<sum) cnt++;
            if(sum1>=sum) r--;
            else {
                cnt+=(r-l);
                l++;
            }
        }
    }
    cout<<cnt<<endl;
}
