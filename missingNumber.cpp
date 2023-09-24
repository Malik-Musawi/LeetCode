class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort the vector
        sort(nums.begin(), nums.end());
        // find the highest and lowest values
        int highest = nums[nums.size() - 1];
        int lowest = nums[0];
        // if the lowest value is not 0, return 0
        if (lowest != 0) {
            return 0;
        }
        // if the difference between the highest and lowest values is equal to the size of the vector, return the highest value + 1
        if (highest - lowest == nums.size() - 1) {
            return highest + 1;
        }
        // else, iterate through the vector
        for (int i = 0; i < nums.size(); i++) {
            // if the difference between the current value and the next value is greater than 1, return the current value + 1
            if (nums[i + 1] - nums[i] > 1) {
                return nums[i] + 1;
            }
        }
        // else, return 0
        return 0;
    }
};