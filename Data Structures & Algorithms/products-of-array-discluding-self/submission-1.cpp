class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> req_list;
        for (int i=0;i<nums.size();i++){
            int count=1;
            for (int j=0;j<nums.size();j++){
                if (i==j) continue;
                else count=count*nums[j];
            }
            req_list.push_back(count);
        }
        return req_list;
    }
};
