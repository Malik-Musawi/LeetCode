class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // lets sort the points based on the x coordinate
        sort(points.begin(), points.end());
        // create a vector to store the difference between the x coordinates
        vector<int> diff;
        // loop through the points
        for (int i = 0; i < points.size() - 1; i++) {
            // push the difference between the x coordinates
            diff.push_back(points[i + 1][0] - points[i][0]);
            // example: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
            // diff = [2, 0, 0, 4, 3]
        }
        // return the maximum element in the vector
        return *max_element(diff.begin(), diff.end()); 
    }
};