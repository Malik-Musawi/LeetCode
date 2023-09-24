class Solution {
public:
    vector<string> fizzBuzz(int n) {
        if (n == 0) {
            return {};
        }
        else if (n % 3 == 0 && n % 5 == 0) {
            vector<string> result = fizzBuzz(n - 1);
            result.push_back("FizzBuzz");
            return result;
        }
        else if (n % 3 == 0) {
            vector<string> result = fizzBuzz(n - 1);
            result.push_back("Fizz");
            return result;
        }
        else if (n % 5 == 0) {
            vector<string> result = fizzBuzz(n - 1);
            result.push_back("Buzz");
            return result;
        }
        else {
            vector<string> result = fizzBuzz(n - 1);
            result.push_back(to_string(n));
            return result;
        }
    }
};