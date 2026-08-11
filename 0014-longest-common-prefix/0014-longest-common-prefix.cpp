class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int i = 0;
        int a = first.size();
        int b = last.size();

        string res;
        while (i < a && i < b && first[i] == last[i]){
            res += first[i];
            i++;
        }

        return res;
    }
};