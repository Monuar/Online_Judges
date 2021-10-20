int Solution::solve(vector<int> &arr) {
    int n=arr.size();
    vector<int>right(n);
    for(int i=n-1;i>=0;i--){
        if(i==n-1) right[i]=arr[i];
        else right[i]=max(right[i+1],arr[i]);
    }
    set<int>s;
    int sum=0;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        s.insert(arr[i]);
        auto it=s.find(arr[i]);
        if(it!=s.begin()&&arr[i]!=right[i]){
            sum=max(sum,(*--it+arr[i]+right[i]));

        }
    }
    return sum;
}
