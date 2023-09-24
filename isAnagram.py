class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if the length of the two strings are not equal, return False
        if len(s) != len(t):
            return False
        # than we going to create a dictionary to store the characters in the string
        dict = {}
        # we are going to loop through the string s and store the characters in the dictionary
        for i in s:
            if i in dict:
                dict[i] += 1
            else:
                dict[i] = 1
        # we are going to loop through the string t and check if the characters are in the dictionary
        for i in t:
            if i in dict:
                dict[i] -= 1
            else:
                return False
        # we are going to loop through the dictionary and check if the value is 0
        for i in dict:
            if dict[i] != 0:
                return False
        return True
    
