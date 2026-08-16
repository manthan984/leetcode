class Solution(object):
    def strStr(self, haystack, needle):
        h_len = len(haystack)
        n_len = len(needle)

        if n_len == 0:
            return 0  # empty needle returns 0

        if n_len > h_len:
            return -1

        for i in range(h_len - n_len + 1):  # only till room for full needle
            j = 0
            while j < n_len and haystack[i + j] == needle[j]:
                j += 1
            if j == n_len:
                return i  # match found
        return -1
