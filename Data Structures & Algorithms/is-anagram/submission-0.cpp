class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen;
        for (char c:s){
            seen[c]++;
        }
        for (char var:t){
            if (seen.find(var)==seen.end() || seen[var]==0) return false;
            if (--seen[var]==0) seen.erase(var);
        }
        if (seen.empty()) return true;
        else return false;
    }
};
