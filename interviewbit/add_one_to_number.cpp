vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int ind=n-1;
    bool flag=1;
    while(ind>=0){
        if(A[ind]==9){
            A[ind]=0;
        }
        else{
            A[ind]=A[ind]+1;
            flag=0;
            break;
        }
        ind--;
    }
    if(flag==1){
        A.insert(A.begin(),1);
        return A;
    }
    else{
        vector<int>v;
        int cnt=0;
       int i;
        for( i=0;i<n-1;i++){
           if(A[i]!=0){

              break;
           }
        }
        for(;i<n;i++){
            v.push_back(A[i]);
        }
        return v;
    }
}

