class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        l = len(str(x))
        if l == 1:
            return True
        string = str(x)
        upper_limit = int(l/2)
        result = False
        i = 0
        j = len(string) - 1
        while(i < j):
            if string[i] != string[j]:
                result = False
                break
            else:
                result = True
            i +=1
            j -=1
        return result
