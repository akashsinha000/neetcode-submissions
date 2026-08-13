class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freqMap; 
        for (int i = 0; i < nums.size(); i++) { 
            if (freqMap[nums[i]] > 0) { 
                return true;
            }
            freqMap[nums[i]]++; 
        }
        return false; 
    }
};
