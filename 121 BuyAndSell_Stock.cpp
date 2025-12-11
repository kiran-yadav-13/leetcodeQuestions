class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // in this question we have to find the maximum profit
        //if we buy and sell at the same day -profit -0
        // and we know buying date< selling 
        //so for everyday profit we have to find the min before it so that profit could be max
        int maxProfit=0;
        int cost=0;
        int mincost=prices[0];
        for(int i=0; i<prices.size(); i++){
            cost=prices[i]-mincost;
            maxProfit=max(cost,maxProfit);
            mincost=min(mincost,prices[i]);
        }
        return maxProfit;
    }
};
