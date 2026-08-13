class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> umap1,umap2;

        for(char c:s){
            umap1[c]++;
        }
        for(char c:t){
            umap2[c]++;
        }
        return umap1==umap2;
    }
};
