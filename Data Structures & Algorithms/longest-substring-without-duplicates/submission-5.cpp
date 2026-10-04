class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()){
            return 0;
        }
        unordered_set<char>st;
        int maxlen=INT_MIN;
        int l=0;
        for(int r=0;r<s.length();r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
