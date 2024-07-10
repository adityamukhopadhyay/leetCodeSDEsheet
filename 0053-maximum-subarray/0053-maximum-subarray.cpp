class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT32_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cursum=max(nums[i],cursum+nums[i]);
            if(maxsum<cursum){
                maxsum=cursum;
            }
        }
        return maxsum;
    }
};