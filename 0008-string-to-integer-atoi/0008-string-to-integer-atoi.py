class Solution(object):
    def myAtoi(self, s):
        s = s.strip()
        if not s:
            return 0

        isNegative = False
        i = 0

        if i < len(s) and (s[i] == '-' or s[i] == '+'):
            isNegative = s[i] == '-'
            i += 1

        num = 0
        while i < len(s) and s[i].isdigit():
            num = num * 10 + int(s[i])
            i += 1

        if isNegative:
            num *= -1

        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        return max(INT_MIN, min(INT_MAX, num))
