class Solution {
public:
    int lengthOfLastWord(string s) {
        deque<char> word;
        int i = s.size() - 1; // i is the index of the last character in the string
        while (i >= 0 && s[i] == ' ') { // skip all the spaces at the end of the string
            --i;
        }
        while (i >= 0 && s[i] != ' ') { // push the characters of the last word into the deque
            word.push_front(s[i]);
            --i;
        }
        return word.size(); // return the size of the deque

    }
};