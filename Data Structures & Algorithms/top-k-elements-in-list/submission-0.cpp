class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int maxi=0;
        int maxikey=0;
        unordered_map<int,int>hash;
        vector <int> req_list;

        for (auto i:nums) hash[i]++;
        for (int i=0;i<k;i++){
            int maxi=0;
            int maxikey=0;
            for (auto &i:hash){
                if (i.second>maxi) {
                    maxi=i.second;
                    maxikey=i.first;
                }
                else continue;
            }
            req_list.push_back(maxikey);
            hash.erase(maxikey);
        }
        return req_list;
    }
};
