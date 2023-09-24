class Solution {
public:
    bool isAnagram(string s, string t) {
        // we are going to create a unorderd map of the characters in s and then compare it to t
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        // but first we are going to compare the lengths of the strings
        if (s.length() != t.length()) {
            return false;
        }
        // now we are going to create the map for s
        for (int i = 0; i < s.length(); i++) {
            if (sMap.find(s[i]) == sMap.end()) {
                sMap[s[i]] = 1;
            } else {
                sMap[s[i]]++;
            }
        }
        // now we are going to create the map for t
        for (int i = 0; i < t.length(); i++) {
            if (tMap.find(t[i]) == tMap.end()) {
                tMap[t[i]] = 1;
            } else {
                tMap[t[i]]++;
            }
        }
        // now we are going to compare the maps
        for (auto it = sMap.begin(); it != sMap.end(); it++) {
            if (tMap.find(it->first) == tMap.end()) {
                return false;
            } else if (tMap[it->first] != it->second) {
                return false;
            }
        }
        return true;
    }
};