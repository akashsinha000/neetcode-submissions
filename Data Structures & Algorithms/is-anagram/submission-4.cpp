class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
      unordered_map<char,int>umap,umappp;

      for(int i=0;i<s.length();i++){
        umap[s[i]]++;
      }  
      for(int j=0;j<t.length();j++){
        umappp[t[j]]++;
      }
      return umap==umappp;
    }
};
