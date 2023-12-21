class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       // store into a map and return the element with highest key
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        // create a priority queue
        priority_queue<pair<int, int>> pq;
        // loop through the map
        for (auto it = freq.begin(); it != freq.end(); it++) {
            // push the pair into the priority queue
            pq.push(make_pair(it->second, it->first));
        }
        // create a vector to store the result
        vector<int> result;
        // loop through the priority queue
        for (int i = 0; i < k; i++) {
            // push the top element into the vector
            result.push_back(pq.top().second);
            // pop the top element
            pq.pop();
        }
        // return the result
        return result;
    }
};
