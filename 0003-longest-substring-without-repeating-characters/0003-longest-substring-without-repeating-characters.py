class Solution(object):
    def lengthOfLongestSubstring(self, s):
        current_substr = ""
        max_len = 0

        for ch in s:
            if ch not in current_substr:
                current_substr += ch
            else:
                dup_index = current_substr.index(ch)
                current_substr = current_substr[dup_index + 1:] + ch
            max_len = max(max_len, len(current_substr))

        return max_len

                    
        