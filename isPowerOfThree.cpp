class Solution {
public:
    bool isPowerOfThree(int n) {
        // if n is 0 or less than 0, return false
        if (n <= 0) {
            return false;
        }
        // if n can be modded by 3, divide n by 3
        while (n % 3 == 0) {
            n /= 3;
        }
        // if n is 1, return true
        if (n == 1) {
            return true;
        }
        // else return false
        return false;
    }
};