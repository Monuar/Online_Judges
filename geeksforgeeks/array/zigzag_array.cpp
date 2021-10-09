class Solution{
public:
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    bool flag=1;
	    for(int i=1;i<n;i++){
	        if(flag){
	            if(arr[i-1]>arr[i]) swap(arr[i-1],arr[i]);
	        }
	        else{
	            if(arr[i-1]<arr[i]) swap(arr[i-1],arr[i]);
	        }
	        flag=!flag;
	    }
	}
};
