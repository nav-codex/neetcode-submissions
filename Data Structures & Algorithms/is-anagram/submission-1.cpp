class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) return false;

        unordered_map<char,int>Countmap;
        for (auto char1:s) Countmap[char1]++;
        for (auto char2:t) Countmap[char2]--;
        
        for (auto const& [key,val]:Countmap) {
            if (val!=0) return false;
            else return true;
        }
        return -1;
    }
};
