class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        bool firstRowZero = false; // One extra cell 
        
        // Which rows and cols needs to be zeroed
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if (matrix[i][j]==0){
                    // 0 the first row's jth col
                    matrix[0][j]=0;
                    
                    // 0 the ith row if i>0
                    if (i>0){
                        matrix[i][0]=0;
                    }
                    else{
                        firstRowZero=true;
                    }
                    
                }
            }
        }
     // Above loop will give us checks, which whole rows and cols to be zeroed  
        // We'll 0 the elements except the header row and cols that are meant for checks
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if (matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        // check if first element(matrix[0][0]) is 0, then 
        // entire 1st col to be zeroed
        if(matrix[0][0]==0){
            for (int i=1; i<m; i++){
                matrix[i][0]=0;
            }
        }
        //check if firstRow is 0 then that entire 1st row to be zeroed
        if (firstRowZero){
            for (int j=0; j<n; j++){
                matrix[0][j]=0;
            }
        }
    }
};