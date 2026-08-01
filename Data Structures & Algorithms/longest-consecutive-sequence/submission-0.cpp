class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=0;
        for (auto j:s){
            if (s.count(j-1)==0){
                int count=1;
                int current=j;
                while (s.count(current+1)==1){
                    count++;
                    current++;
                }
            maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
