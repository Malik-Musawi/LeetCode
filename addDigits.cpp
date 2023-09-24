class Solution {
public:
    int addDigits(int num) {
        // go through each digit and add them together
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        // if the sum is greater than 9, then repeat the process
        if (sum > 9) {
            return addDigits(sum);
        }
        return sum;
    }
};