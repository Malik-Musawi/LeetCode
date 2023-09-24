class Solution {
public:
    int countOdds(int low, int high) {

      return (high-low+1)/2+(high%2&&high%2==low%2);
      /* explansion of this formala with example
        if low is even and high is even then (high-low+1)/2
        if low is odd and high is odd then (high-low+1)/2
        if low is even and high is odd then (high-low+1)/2+1
        if low is odd and high is even then (high-low+1)/2+1
        an example of this is low=3 and high=7
        (7-3+1)/2+(7%2&&7%2==3%2)
        (5)/2+(1&&1)
        2+1
        3
        3 is the correct answer
      
      */
    }
};