class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap ;    
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;

        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto it=umap.begin();it!=umap.end();it++){
            minh.push({it->second,it->first});

            if(minh.size()>k){
                minh.pop();
            }
        }
            vector<int> result;

            while(minh.size()>0){
                result.push_back(minh.top().second);
                minh.pop();
            }
            sort(result.begin(),result.end());
            return result;
        }

};
