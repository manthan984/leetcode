class Solution(object):
    def lengthOfLastWord(self, s):
        s_list = s.split()
        return len(s_list[-1])
        