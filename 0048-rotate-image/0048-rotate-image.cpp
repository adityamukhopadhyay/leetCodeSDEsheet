class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
//         Step 1: Transpose (Row becomes col and vice versa)
//         Opp Elements are swapped about diagonal
/*      1 2 3       1 4 7
        4 5 6   ->  2 5 8
        7 8 9       3 6 9
*/
        int n = matrix.size();
        for (int i=0; i<n-1; i++){
//             see eg 2, we only need to traverse till 2nd last row and start from 2nd col
            for (int j=i+1;j<n; j++){
//                 perform swap of opp elements
                // matrix[i][j] becomes matrix[j][i]
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // Step 2: Now reverse all rows using 2 pointer swap O(N/2)
        int p1, p2;
        
        for (int i = 0; i<n; i++){
            p1=0,p2=n-1;
            while(p1<p2){
                swap(matrix[i][p1],matrix[i][p2]);
                p1++; p2--;
            }
        }
            
    }
};