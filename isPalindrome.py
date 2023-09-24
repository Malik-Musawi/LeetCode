class Solution:
    def isPalindrome(self, x: int) -> bool:
        # we intialize a variable to store the reverse of the number
        rev = 0
        # we store the original number in a variable
        original = x
        # we check if the number is negative or not
        if x < 0:
            return False
        # we run a loop until the number is greater than 0
        while x > 0:
            # we extract the last digit of the number
            last_digit = x % 10
            # we multiply the reverse by 10 and add the last digit to it to get the reverse
            rev = rev * 10 + last_digit
            # we divide the number by 10 to remove the last digit
            x = x // 10
        # we check if the original number is equal to the reverse
        if original == rev:
            return True
        else:
            return False
