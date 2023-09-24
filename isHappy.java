class Solution {
public boolean isHappy(int n) {
        // we are going to make arraylist to store the values
        ArrayList<Integer> list = new ArrayList<Integer>();
        // we are going to make a while loop to check if the number is 1 or not
        while (n != 1) {
            // we are going to make a variable to store the sum of the squares
            int sum = 0;
            // we are going to make a while loop to check if the number is greater than 0
            while (n > 0) {
                // we are going to add the square of the number to the sum
                sum += Math.pow(n % 10, 2 ); /
                // we are going to divide the number by 10
                n /= 10;
            }
            // we are going to check if the list contains the sum
            if (list.contains(sum)) {
                // we are going to return false
                return false;
            }
            // we are going to add the sum to the list
            list.add(sum);
            // we are going to set the number to the sum
            n = sum;
        }
        // we are going to return true
        return true;
    }
}