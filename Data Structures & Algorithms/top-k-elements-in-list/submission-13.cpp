class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it=umap.begin();it!=umap.end();it++){
            pq.push({it->second,it->first});

            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>res;
        while(pq.size()>0){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
