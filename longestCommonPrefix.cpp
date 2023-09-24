class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // intalize prefix to empty string
        string prefix = "";
        // iterate through the vector and compare each string
        for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it) {
            if (it == strs.begin()) {
                prefix = *it;
            } else {
                int i = 0;
                while (i < prefix.size() && i < it->size() && prefix[i] == (*it)[i]) {
                    ++i;
                }
                prefix = prefix.substr(0, i);
            }
        }
        return prefix;
    }
};