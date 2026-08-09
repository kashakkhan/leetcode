class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int max_profit=0;
        for(int i=1;i<prices.size();i++){
            if (prices[i] < prices[buy]) {
                buy=i;}
            
            else {
                int profit= prices[i]-prices[buy];
                if (profit > max_profit) {
                    max_profit=profit;
                }
           
            }
           
        }
        if (max_profit){
            return max_profit;
        }
        else {
            return 0;
        }
        }
    
    
};