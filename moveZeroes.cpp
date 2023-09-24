class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // iterate through the vector and count how many zero you find until the end of the vector, remove the zeros, and add them to the end of the vector
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count++;
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        for (int i = 0; i < count; i++) {
            nums.push_back(0);
        }
    }
};
------
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using revrse iterators, iterate through the vector and for every zero you remove add one to the end of the vector
        for (auto it = nums.rbegin(); it != nums.rend(); it++) {
            if (*it == 0) {
                nums.erase(next(it).base());
                nums.push_back(0);
            }
        }
    }
};