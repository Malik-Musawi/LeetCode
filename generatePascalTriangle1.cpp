class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle; // pascalTriangle is a vector of vectors of integers
        for (int i = 0; i < numRows; i++) { // for each row
            vector<int> row; // row is a vector of integers
            for (int j = 0; j <= i; j++) { // for each column
                if (j == 0 || j == i) { // if the column is the first or last column
                    row.push_back(1); // we push back 1
                } else { // if the column is not the first or last column
                    row.push_back(pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j]); // we push back the sum of the two elements above it
                }
            }
            pascalTriangle.push_back(row); // we push back the row
        }
        return pascalTriangle;
    }
};