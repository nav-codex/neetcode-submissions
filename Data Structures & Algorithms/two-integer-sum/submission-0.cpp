class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first,second=0;
        for (int i=0;i<nums.size()-1;i++){
            int required=target-nums[i];
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]==required){
                    second=j;
                    first=i;
                    break;
                } 
            }
        }
        return {first,second};
    }
};
