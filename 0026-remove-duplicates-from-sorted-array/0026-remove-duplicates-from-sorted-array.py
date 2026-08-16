class Solution(object):
    def removeDuplicates(self, nums):
        l = len(nums)
        checker = nums[0]
        i = 1
        while i < l:
            if checker == nums[i]:
                nums.pop(i)
                l-=1
            else:
                checker = nums[i]
                i+=1
        return l
        