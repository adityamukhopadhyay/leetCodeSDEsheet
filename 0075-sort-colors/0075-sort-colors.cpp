class Solution {
public:
    void sortColors(vector<int>& nums) {
    
        int start = 0, mid = 0, end = nums.size()-1;
        
        while (mid<=end){
         
            switch (nums[mid]){
                case 0:
                    std::swap(nums[start],nums[mid]);
                    mid++;
                    start++;
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    std::swap(nums[mid],nums[end]);
                    end--;
                    break;
            }
        }
    }
};