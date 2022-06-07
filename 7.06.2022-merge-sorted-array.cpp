//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/merge-sorted-array/
//submission link: https://leetcode.com/submissions/detail/716696759/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1;
        int j=m-1;
        int k=n-1;
        
        while (k>=0 and j>=0)
        {
            if (nums2[k]>nums1[j])
            {
                nums1[i]=nums2[k];
                i--;
                k--;
            }
            else
            {
                nums1[i]=nums1[j];
                i--;
                j--;
            }
        }
        
        while (k>=0)        //if nums2 length greater than nums1
        {
            nums1[i]=nums2[k];
            i--;
            k--;
        }
        
        // while (j>=0)
        // {
        //     nums1[i]=nums1[j];
        //     i--;
        //     j--;
        // }
    }
};
