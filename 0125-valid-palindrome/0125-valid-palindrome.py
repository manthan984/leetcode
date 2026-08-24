class Solution(object):
    def isPalindrome(self, s):
        #first
        # filtered = [c.lower() for c in s if c.isalnum()]
        # return filtered == filtered[::-1]
        #second

        # left, right = 0, len(s) - 1

        # while left < right:
        #     while left < right and not s[left].isalnum():
        #         left += 1
        #     while left < right and not s[right].isalnum():
        #         right -= 1
        #     if s[left].lower() != s[right].lower():
        #         return False
        #     left += 1
        #     right -= 1
        # return True

        #third
        cleaned = ''.join(c.lower() for c in s if c.isalnum())
        n = len(cleaned)
        return cleaned[:n//2] == cleaned[(n+1)//2:][::-1]