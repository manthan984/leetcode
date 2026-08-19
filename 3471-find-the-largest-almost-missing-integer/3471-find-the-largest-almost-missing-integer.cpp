class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return -1;
        if (k == n){
            return *max_element(nums.begin(), nums.end());
        }
        if (k == 1){
            unordered_map<int, int> freqMap;
            for (int el : nums) {
                freqMap[el]++;
            }
            int max_one = -1;
            for (const auto& [el, count] : freqMap){
                if (count == 1){
                    max_one = max(max_one, el);
                }
            }
            return max_one;
        }
        else {
            int first = nums[0];
            int last = nums[n-1];

            if (first == last) return -1;

            int first_rep = 0;
            int last_rep = 0;
            for (int i = 1; i<=n-2; i++){
                if (first == nums[i]) first_rep = 1;
                if (last == nums[i]) last_rep = 1;
            }

            if (!first_rep && !last_rep) return max(first, last);
            if (!first_rep) return first;
            if (!last_rep) return last;
            return -1;
        }
    }
};