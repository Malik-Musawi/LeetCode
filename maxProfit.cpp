class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // basiclly, we going to go through the array and find the min and max
        // and then return the difference and make sure the min is before the max
        int min = INT_MAX; // set the min to the max int
        int max = 0; // set the max to 0
        for(int i = 0; i < prices.size(); i++){
            // if the current price is less than the min, set the min to the current price
            if(prices[i] < min){
                min = prices[i];
            }
            // if the current price - min is greater than the max, set the max to the current price - min
            else if(prices[i] - min > max){
                max = prices[i] - min;
            }
        }
        // return the max
        return max;
    }
};