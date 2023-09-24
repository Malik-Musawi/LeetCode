class Solution {
public:
    void reverseString(vector<char>& s) {
        // create a reverse itreator and store the reverse of the string into a new vector 
        vector<char> reverse;
        for (vector<char>::reverse_iterator it = s.rbegin(); it != s.rend(); it++) {
            reverse.push_back(*it);
        }
        // copy the reverse vector into the original vector
        for (int i = 0; i < s.size(); i++) {
            s[i] = reverse[i];
        }
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};