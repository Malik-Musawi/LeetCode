class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // create unorder map and if any value has a count > 1 return true
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
            if (map[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};