class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int folderDepth = 0;
        
        for (const auto& log : logs){
            
            if (log == "../") {
                folderDepth = max(0, folderDepth - 1);
            }
            // Increase depth if the log is not 'stay in the current directory
            
            else if (log != "./") {
                // Go down one directory
                ++folderDepth;
            }
            // Ignore "./" operations as they don't change the current folder
            
        }
        
        return folderDepth;
    }
};