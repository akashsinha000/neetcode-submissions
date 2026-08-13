class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>uset;
        int start=0;
        int maxlength=0;

        for(int i=0;i<s.length();i++){
            while(uset.find(s[i])!=uset.end()){
                uset.erase(s[start]);
                start++;
            }
            uset.insert(s[i]);
            maxlength=max(maxlength,i-start+1);
        }
        return maxlength;
    }
};
