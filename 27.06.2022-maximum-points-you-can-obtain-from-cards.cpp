//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
//submission link: https://leetcode.com/submissions/detail/732043297/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        int n=cardPoints.size();
        int sum=0;
        for(int i=n-k; i<n;i++) 
            ans=ans+cardPoints[i]; 
        for(int i=0,sum=ans; i<k; i++) 
        {
            sum=sum-cardPoints[n-k+i];
            sum=sum+cardPoints[i];
            ans=max(ans,sum);
        }
        return ans;
    }
};
