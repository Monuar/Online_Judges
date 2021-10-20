
int Solution::solve(vector<int> &arr, int b) {
    int l=b-1,r=arr.size()-1;
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<b;i++){
        currentsum+=arr[i];
    }
    maxsum=currentsum;
    while(l>=0&&r>=0){
        currentsum-=arr[l--];
        currentsum+=arr[r--];
        if(currentsum>maxsum) maxsum=currentsum;
    }
    return maxsum;

}
