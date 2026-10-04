class Solution {
public:
    int jump(vector<int>& nums) {
        int maxreach=0;
        int jump=0;
        int prevval=0;

        for(int i=0;i<nums.size()-1;i++){
            maxreach=max(maxreach,nums[i]+i);
            if(i==prevval){
                jump++;
                prevval=maxreach;
            }
        }
        return jump;
    }
};
