class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int n = n1 + n2;

        int i = 0, j = 0;
        int idx2 = n/2;
        int idx1 = idx2 - 1;
        int cnt = 0, idxEl1 = INT_MIN, idxEl2 = INT_MIN;

        while (i<n1 && j<n2) {
            if (nums1[i] < nums2[j]){
                if (cnt == idx1) idxEl1 = nums1[i];
                if (cnt == idx2) idxEl2 = nums1[i];
                cnt++;
                i++;
            }
            else {
                if (cnt == idx1) idxEl1 = nums2[j];
                if (cnt == idx2) idxEl2 = nums2[j];
                cnt++;
                j++;               
            }
        }
        while (i < n1) {
                if (cnt == idx1) idxEl1 = nums1[i];
                if (cnt == idx2) idxEl2 = nums1[i];
                cnt++;
                i++;            
        }
        while (j < n2) {
                if (cnt == idx1) idxEl1 = nums2[j];
                if (cnt == idx2) idxEl2 = nums2[j];
                cnt++;
                j++;            
        }

        if (n%2 == 1){
            return idxEl2;
        }
        return (double)((double)(idxEl1 + idxEl2)) / 2.0;
    }
};