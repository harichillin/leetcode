class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int temp=prices[0];
        int profit=0;
        for(int i=1;i<len;i++)
        {
            temp=min(temp,prices[i]);
            profit=max(profit,prices[i]-temp);
        }
        return profit;
        
    }
};