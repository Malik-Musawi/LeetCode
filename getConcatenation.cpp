class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // we are going to create a new vector that is the size of nums * 2
        vector<int> ans(nums.size() * 2);
        // now we are going to loop through nums and add the values to ans
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};