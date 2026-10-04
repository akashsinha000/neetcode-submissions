class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>freq;
        int l = 0;
        int maxfreq=0;
        int maxlength=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]]++;
            maxfreq=max(maxfreq,freq[s[r]]);
            while((r-l+1)-maxfreq>k){
                freq[s[l]]--;
                l++;
            }
            maxlength=max(maxlength,r-l+1);
        }
        return maxlength;
    }
};

