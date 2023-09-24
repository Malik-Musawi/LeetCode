class Solution {
public:
    bool isPowerOfTwo(int n) {
        // create an vector of powers of 2 up to 2^50
        vector<long> powers;
        for (int i = 0; i < 50; i++) {
            powers.push_back(pow(2, i));
        }
        // check if n is in the vector
        for (int i = 0; i < powers.size(); i++) {
            if (n == powers[i]) {
                return true;
            }
        }
        return false;
    }
};