class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto it=umap.begin();it!=umap.end();it++){
            arr.push_back({it->first,it->second});
        }
        sort(arr.begin(),arr.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
