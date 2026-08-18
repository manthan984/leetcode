class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(), inter.end());
        vector<vector<int>> ans;

        int n = inter.size();
        vector<int> ansPair = inter[0];
        for (int i=1; i<n; i++){
            if (inter[i][0] <= ansPair[1]){
                ansPair[1] =  max(ansPair[1], inter[i][1]);
            } else {
                ans.push_back(ansPair);
                ansPair = inter[i];
            }
        }
        ans.push_back(ansPair);

        return ans;
    }
};