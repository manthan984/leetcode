class Solution:

  def minimumDeletions(self, nums: list[int]) -> int:
    n = len(nums)
    min_i = nums.index(min(nums))
    max_i = nums.index(max(nums))

    front_only = max(min_i, max_i) + 1

    back_only = n - min(min_i, max_i)

    both_ends = (min(min_i, max_i) + 1) + (n - max(min_i, max_i))

    return min(front_only, back_only, both_ends)
