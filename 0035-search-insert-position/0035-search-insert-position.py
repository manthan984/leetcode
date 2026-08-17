class Solution(object):
    def searchInsert(self, nums, target):
        if target in nums:
            return nums.index(target)
        l = len(nums)
        assumed_index = 0
        for i in range(l):
            if nums[i] < target:
                assumed_index = i + 1
        return assumed_index
        