class Solution(object):
    def removeElement(self, nums, val):
        l = len(nums)
        i = 0
        count = 0
        while i < l:
            if nums[i] == val:
                nums[i] = '_'
                i+=1
                count +=1
            else:
                i+=1
        nums.sort()
        for i in range(count):
            nums.pop()
        return len(nums)
        