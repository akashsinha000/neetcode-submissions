class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        vector<int> result;
        for(int i=0;i<k;i++){
            int freq=0;
            int mostfreq;
            for(auto itr=umap.begin();itr!=umap.end();itr++){
                if(itr->second>freq){
                    freq=itr->second;
                    mostfreq=itr->first;
                }
            }
            result.push_back(mostfreq);
            umap.erase(mostfreq);
        }
        return result;
    }
};
