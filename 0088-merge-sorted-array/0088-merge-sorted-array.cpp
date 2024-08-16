class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        int p1 = m-1;
        int p2 = n-1;
//         Initialise 3 pointers from end of both arrays, out which one points to the last
//         index of nums1, while p1 points to last mth element in nums1;
        
//         unless out of bounds:
        
        while(p2>=0){
            // if p2 reaches out of bounds array is merged and sorted
            
//             this is because of the edge case either m or n can be zero:
//             0 <= m, n <= 200
//             1 <= m + n <= 200
            
            if (p1>=0 && nums1[p1]>nums2[p2]){
                nums1[last--]=nums1[p1--];
            }
            
            else{
                nums1[last--]=nums2[p2--];
            }
            
//             whichever of nums1[p1],nums2[p2] is largest, is put to last
        }
        
    }
};