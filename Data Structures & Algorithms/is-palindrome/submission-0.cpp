class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for (auto c:s){
            if (isalnum(c)){
                cleaned+=tolower(c);
            }
        }
        int n=cleaned.size();
        int j=(n-1);
        for (int i=0;i<j;){
            if ((cleaned[i])==(cleaned[j])){
                i++;
                j--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
