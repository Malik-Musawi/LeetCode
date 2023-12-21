class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // first we are going to create a hashmap that will store the letters of the string as a key and the index of the string as the value
        unordered_map<string, vector<string>> anagrams;
        // we are going to loop through the strings
        for (string s : strs) {
            // we are going to sort the string
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            // we are going to check if the sorted string is in the hashmap
            if (anagrams.find(sorted) == anagrams.end()) {
                // if it is not in the hashmap, we are going to add it
                anagrams[sorted] = vector<string> {s};
            } else {
                // if it is in the hashmap, we are going to add the string to the vector
                anagrams[sorted].push_back(s);
            }
        }
        // we are going to create a vector of vectors to store the anagrams
        vector<vector<string>> result;
        // we are going to loop through the hashmap
        for (auto it = anagrams.begin(); it != anagrams.end(); it++) {
            // we are going to add the vector to the result
            result.push_back(it->second);
        }
        // we are going to return the result
        return result;
    }
};