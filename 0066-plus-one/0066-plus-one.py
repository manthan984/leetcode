class Solution(object):
    def plusOne(self, digits):
        # Traverse from the last digits backwards
        for i in range(len(digits) - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            digits[i] = 0
        # If we reach here, it means all digits were 9, so we need to add a new digit at the beginning
        return [1] + digits