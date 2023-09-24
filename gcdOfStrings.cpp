class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        // first we are going to check if the strings are equal or not
        if(str1 + str2 != str2 + str1)
        {
            return "";
        }
        // if the strings are equal then we are going to find the gcd of the length of the strings
        // and then we are going to return the substring of the first string
        return str1.substr(0, gcd(str1.length(), str2.length()));
    }
    /* explansion with an example
    str1 = "ABCABC"
    str2 = "ABC"
    str1 + str2 = "ABCABCABC"
    str2 + str1 = "ABCABCABC"
    and we can see that the strings are equal
    and for returning the gcd of the length of the strings we are going to return the substring of the first string
    in this case the gcd of the length of the strings is 3
    so we are going to return the substring of the first string from 0 to 3
    so we are going to return "ABC"
    another case will be 
    str1 = "ABABAB"
    str2 = "ABAB"
    str1 + str2 = "ABABABABAB"
    str2 + str1 = "ABABABABAB"
    and we can see that the strings are equal
    and for returning the gcd of the length of the strings we are going to return the substring of the first string
    in this case the gcd of the length of the strings is 2
    so we are going to return the substring of the first string from 0 to 2
    so we are going to return "AB"
    and if the strings are not equal then we are going to return an empty string
    */
};