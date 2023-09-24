class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // first we get the size of the vector
        int n = mat.size();
        // if the size is odd, we are going to take a number and skip a number when we add
        // if the size is even, we are going to take a number and add the next number
        // we are going to use a for loop to iterate through the vector
        // we are going to use a variable to keep track of the sum
        int sum = 0;
        for(int i = 0; i < n; i++){
            // we are going to add the number at the index i and the number at the index n-i-1
            sum += mat[i][i] + mat[i][n-i-1];
        }
        // if the size is odd, we are going to subtract the middle number
        if(n%2==1){
            sum -= mat[n/2][n/2];
        }
        // return the sum
        return sum;
    }
};