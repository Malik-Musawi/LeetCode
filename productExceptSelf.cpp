class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1); // initialize result vector with 1 as all elements
        int prefix = 1; // initialize prefix with 1
        for (int i = 0; i < nums.size(); i++) {
            result[i] *= prefix; // multiply prefix with result[i]
            prefix *= nums[i]; // update prefix
        }
        int postfix = 1; // initialize postfix with 1
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= postfix; // multiply postfix with result[i]
            postfix *= nums[i]; // update postfix
        }
        return result;
        
        
    }
};