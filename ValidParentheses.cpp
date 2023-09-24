class Solution {
`public:
    bool isValid(string s) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(')
            {
            if (s[i-1] != ')')`