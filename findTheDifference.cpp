class Solution {
public:
    char findTheDifference(string s, string t) {
        // first we going to find the ascii value of the char that is missing
        // than we going to convert that ascii value to a char and return it
        int ascii = 0;
        // we going to subtract the ascii value of each char in s from ascii
        for (int i = 0; i < s.length(); i++) {
            ascii -= s[i];
        }
        // we going to add the ascii value of each char in t to ascii
        for (int i = 0; i < t.length(); i++) {
            ascii += t[i];
        }
        // than we going to convert ascii to a char and return it

        /* if it is hard to understand 
        i will explain it in  example
        if user entered s = "a" and t = "ab"
        ascii = 0
        ascii = 0 - 97 = -97
        ascii = -97 + 97 = 0
        ascii = 0 + 98 = 98
        ascii = 98 = 'b'
        */
        return ascii;
    }
};