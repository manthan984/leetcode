class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEL = INT_MIN;
        int sum = 0;
        for (int i=0; i<nums.size();i++){
            sum = sum + nums[i];
            maxEL = max(sum,maxEL);
            if (sum <= 0){
                sum = 0;
            }
        }
        return maxEL;
    }
};