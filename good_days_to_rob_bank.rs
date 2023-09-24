impl Solution {
    pub fn good_days_to_rob_bank(security: Vec<i32>, time: i32) -> Vec<i32> {
        /*  first we are going to find the longest consecutive days
         where the security is less than or equal to the previous day
        and the next day
         then we are going to find the longest consecutive days
         where the security is less than or equal to the next day
         and the previous day
         then we are going to find the intersection of the two
        and return the indices  */
        let size = security.len(); // size of the security array
        let mut cnt = 1; // counter for consecutive days
        let mut pre = vec![0; size]; // array to store the consecutive days
        pre[0] = 1; // first day is always a good day
        for i in 1..size { 
            // loop through the security array
            if security[i] <= security[i - 1] {
                // if the security is less than or equal to the previous day
                cnt += 1;
                // increment the counter
            } else {
                // if the security is greater than the previous day
                // reset the counter
                cnt = 1;
            }
            // store the counter in the pre array
            pre[i] = cnt;
        }
        // repeat the same process for the next day
        // but loop in the reverse order
        let mut suf = vec![0; size]; // array to store the consecutive days
        suf[size - 1] = 1; // last day is always a good day
        cnt = 1; // reset the counter
        for i in (0..(size - 1)).rev() {
            // loop through the security array in the reverse order
            if security[i] <= security[i + 1] {
                cnt += 1;
            } else {
                cnt = 1;
            }
            // store the counter in the suf array
            suf[i] = cnt;
        }
        /*  now we have the pre and suf arrays
         we need to find the intersection of the two
          and return the indices
          we can do this by looping through the pre and suf arrays
          and checking if the value at the index is greater than or equal to time
         if it is, then we add the index to the ans array
         and return the ans array
         if it is not, then we do nothing
         and return the ans array */

        let mut ans = Vec::new();
        // array to store the indices
        for i in 0..size {
            // if the value at the index is greater than or equal to time
            if pre[i] - 1 >= time && suf[i] - 1 >= time {
                ans.push(i as i32); // add the index to the ans array
            }
        }

        ans // return the ans array
    }
}
