//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/non-decreasing-array/
//submission link: https://leetcode.com/submissions/detail/730907202/

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0;
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i]<nums[i-1])
            {
                if (count>=1)
                    return false;
                if (i<2 or nums[i-2]<=nums[i])
                {
                    nums[i-1]=nums[i];
                }
                else
                {
                    nums[i]=nums[i-1];
                }
                count++;
            }
        }
        return true;
    }
};
