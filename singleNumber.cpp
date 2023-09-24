class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // we create a map
        int singleNumber = 0;
        map<int, int> m; // m is a map of integers to integers
        // we iterate through nums
        for (int i = 0; i < nums.size(); i++) {
            // if the current element is in the map, then we increment the value of the current element by 1
            if (m.find(nums[i]) != m.end()) {
                m[nums[i]]++;
            } else { // if the current element is not in the map, then we add the current element to the map
                m[nums[i]] = 1;
            }
        }
        // we iterate through the map and find the element with value 1
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == 1) {
                singleNumber = it->first;
            }
        }
        return singleNumber;
    }
};