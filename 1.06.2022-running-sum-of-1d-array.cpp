//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/running-sum-of-1d-array/
//submission link: https://leetcode.com/submissions/detail/712268756/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //prefix sum
        for (int i=1; i<nums.size(); i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};
