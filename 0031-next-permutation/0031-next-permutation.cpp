class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return;
        }
        int rightPeak = -1;
        int i=1;
        // Find Peak
        while (i<n){
            if(nums[i]>nums[i-1]){
                rightPeak = i;
            }
            i+=1;
        }
        if (rightPeak==-1){// no peak, array is desc convert to asc
            sort(nums.begin(), nums.end());
            return;
        }
        // check if any element is falls between nums[rightPeak] and nums[rightPeak-1] to the right
        
        int index = rightPeak;
        for (i=index; i<n; ++i){
            if(nums[i]>nums[rightPeak-1] && nums[i]<nums[index]){
                index = i;
            }
        }
        swap(nums[rightPeak-1],nums[index]);
        sort(nums.begin()+rightPeak,nums.end());
        
    }
};