class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=1;
        int maxProfit=0;
        int currProfit;
        // profit sell-buy
        int n = prices.size();
        
        while (sell<n){
            if (prices[buy]<prices[sell]){
                currProfit=prices[sell]-prices[buy];
                maxProfit=max(maxProfit,currProfit);
            }
            else{
                buy=sell;
            }
            sell+=1;
            
        }
        return maxProfit;
    }
};