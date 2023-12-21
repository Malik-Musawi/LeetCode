class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Partially sort the prices vector so that the two smallest elements are at the beginning
nth_element(prices.begin(), prices.begin() + 1, prices.end());

// Calculate the remaining money after buying the two cheapest chocolates
int remainingMoney = money - prices[0] - prices[1];

// If the remaining money is non-negative, return it; otherwise, return the total money
return (remainingMoney >= 0) ? remainingMoney : money;
    }
};