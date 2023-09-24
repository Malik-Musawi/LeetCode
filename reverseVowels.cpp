class Solution {
public:
/* 
Funcation Name: isVowel 
Purpose: to check if a char is a vowel
Parameters: char c
Return Value: bool
 */
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' ||
            c == 'u' || c == 'A' || c == 'E' || c == 'I' ||
            c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        // 1. i pushed the string into a vector to make it easier to swap
        vector<char> charVec;
        for (int i = 0; i < s.length(); i++) {
            charVec.push_back(s[i]);
        }
        // 2. than i assigned two pointers to the beginning and end of the vector
        int i = 0;
        int j = charVec.size() - 1;
        // 3. than i checked if the char at the beginning and end of the vector
        while (i < j) {
            // 4. if both are vowels i swapped them and incremented i and decremented j
            if (isVowel(charVec[i]) && isVowel(charVec[j])) {
                swap(charVec[i], charVec[j]);
                i++;
                j--;
                // 5. if the char at the beginning is a vowel and the char at the end is not
            } else if (isVowel(charVec[i]) && !isVowel(charVec[j])) {
                j--;
                // 6. if the char at the beginning is not a vowel and the char at the end is
            } else if (!isVowel(charVec[i]) && isVowel(charVec[j])) {
                i++;
                // 7. if neither are vowels i just increment i and decrement j
            } else {
                i++;
                j--;
            }
        }
// 8. than i pushed the vector back into a string and returned it
        string result;
        for (int i = 0; i < charVec.size(); i++) {
            result += charVec[i];
        }

        return result;
    }
};
