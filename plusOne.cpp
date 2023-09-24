class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       if (digits.back() >= 0 && digits.back() <= 8) {
           digits.back() += 1;
           return digits;
         } else {
                int i = digits.size() - 1;
                while (i >= 0 && digits[i] == 9) {
                    digits[i] = 0;
                    --i;
                }
                if (i >= 0) {
                    digits[i] += 1;
                } else {
                    digits.insert(digits.begin(), 1);
                }
                
       }
        return digits;
    }
};