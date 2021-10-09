
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){

        long long maxsum=-1000000000;
        long long currentsum=0;
        for(int i=0;i<n;i++){
            currentsum+=arr[i];
            if(currentsum>maxsum){
                maxsum=currentsum;
            }
            if(currentsum<0) currentsum=0;
        }
        return maxsum;
    }
};
