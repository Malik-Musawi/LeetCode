class Solution {
public:
    int climbStairs(int n) {
        // create a deque to store the number of ways to climb the stairs
        deque<int> ways;
        // push the first two numbers into the deque
        ways.push_back(1);
        ways.push_back(2);
        // if n is less than or equal to 2, return the nth number of the deque
        if (n <= 2) {
            return ways[n-1]; // the reason why we return ways[n-1] is because the index of the first number is 0 and the index of the second number is 1
        }
        // if n is greater than 2, push the sum of the last two numbers into the deque
        else {
            // the reason why we start the for loop at 2 is because the first two numbers are already in the deque
            for (int i = 2; i < n; ++i) {
                // push the sum of the last two numbers into the deque
                ways.push_back(ways[i-1] + ways[i-2]); // we use i-1 and i-2 because the index of the first number is 0 and the index of the second number is 1
                //  the reason why we add the last two numbers is because we can either climb 1 or 2 steps at a time
                // if we can climb 1 step at a time, then the number of ways to climb the stairs is the same as the number of ways to climb the stairs with n-1 steps
                // if we can climb 2 steps at a time, then the number of ways to climb the stairs is the same as the number of ways to climb the stairs with n-2 steps
                // i - 1 is the number of ways to climb the stairs with n-1 steps
                // i - 2 is the number of ways to climb the stairs with n-2 steps
            }
        }
        // return the nth number of the deque
        return ways[n-1]; // the reason why we return ways[n-1] is because the index of the first number is 0 and the index of the second number is 1

    }
};