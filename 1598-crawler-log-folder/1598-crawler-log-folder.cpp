class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folderDepth = 0;
        int n = logs.size();
        
        for (int i=0; i<n; i++){
            
            if (logs[i] == "../") {
                folderDepth = max(0, folderDepth - 1);
            }
            // Increase depth if the log is not 'stay in the current directory
            else if (logs[i] != "./") {
                // Go down one directory
                ++folderDepth;
            }
            // Ignore "./" operations as they don't change the current folder
            
        }
        
        return folderDepth;
    }
};