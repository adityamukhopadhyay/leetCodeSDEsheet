class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
//         1. Sort the intervals based on 1st element
        sort(intervals.begin(), intervals.end());
//         2. create ans vector to append correct intervals
        vector<vector<int>> ans;
//         3. Push all updated intervals to the ans
//         4. We only push_back elements in ans if either ans is empty or if has element then
//         check ans.back()[1] of ans with current intervals[i][0] then evaluate accordingly
        for (int i=0;i<n;i++){
            
            if (ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
           }
            else{
                ans.back()[1] = max(intervals[i][1],ans.back()[1]);
            }
//             change upper interval of element in ans according to the above condition
        }
        return ans;
    }
        
};