class Solution {
public:
    bool isSubsequence(string s, string t) {
        // we are to iterate through the string t and check if the characters in s are present in t
       auto it = s.begin();
       // for each character in t, we check if it is present in s
        for (char c : t) {
            // if the character is present in s, we increment the iterator
             it += (*it == c);
             // if the iterator reaches the end of s, we return true
        }
        // if the iterator does not reach the end of s, we return false
        return it == s.end();

    }
};