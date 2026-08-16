class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto lastUniqueIt = nums.begin();
        int n = nums.size();
        for (int i = 0; i<n; i++){
            if (nums[i] != *lastUniqueIt) *(++lastUniqueIt) = nums[i];
        }
        nums.erase(lastUniqueIt+1, nums.end());
        return nums.size();
    }
};