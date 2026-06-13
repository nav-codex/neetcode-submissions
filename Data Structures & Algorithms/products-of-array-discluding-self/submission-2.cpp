class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> req_list(n);
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0]=1;
        suffix[n-1]=1;

        for (int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }

        for (int j=n-2;j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j+1];
        }

        for (int k=0;k<n;k++){
            req_list[k]=prefix[k]*suffix[k];
        }
        return req_list;


    }
};
