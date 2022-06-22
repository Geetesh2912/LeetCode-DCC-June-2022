//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/kth-largest-element-in-an-array/
//submission link: https://leetcode.com/submissions/detail/728697739/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> myQ(nums.begin(), nums.end());
        while (--k)
        {
            myQ.pop();
        }
        return myQ.top();
    }
};
