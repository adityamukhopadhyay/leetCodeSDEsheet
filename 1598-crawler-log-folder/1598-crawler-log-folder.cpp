class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> logStack;
        int n = logs.size();
        
        for (int i=0; i<n; i++){
            
            if (logs[i]!="../"){
                logStack.push(logs[i]);
            }
            
            
            if(!logStack.empty() && (logs[i]=="../" || logStack.top()=="./")){
                logStack.pop();
            }
            
        }
        
        return logStack.size();
    }
};