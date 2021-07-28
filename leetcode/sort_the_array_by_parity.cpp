class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        vector<int>v1;
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) v1.push_back(v[i]);
        }
        for(int i=0;i<v.size();i++) {
            if(v[i]%2==1) v1.push_back(v[i]);
        }
        return v1;
    }
};
