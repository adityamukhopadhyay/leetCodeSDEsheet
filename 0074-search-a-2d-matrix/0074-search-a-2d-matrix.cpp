class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())return false;

        int m=matrix.size();     //no. of rows
        int n=matrix[0].size();  //no. of cols

        int l=0,h=(n*m)-1;

        while(h>=l){
            int mid=(h+l)/2;

            if(matrix[mid/n][mid%n]==target) {return true;}
            if(matrix[mid/n][mid%n]<target) {l=mid+1;}
            else {h=mid-1;}
        }
        return false;
    }
};