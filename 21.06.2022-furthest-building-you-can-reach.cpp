//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/furthest-building-you-can-reach/
//submission link: https://leetcode.com/submissions/detail/727827018/

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        //we'll use a priority queue as it is default max heap and we need to keep a note of max height
        
        priority_queue<int> myQ;
        int i=1;
        for (; i<heights.size(); i++)
        {
            if (heights[i]<heights[i-1])    //if next h is lower no need of bricks or ladders
                continue;          //jumping down
            myQ.push(heights[i]-heights[i-1]);   //if next h not lower then we note the difference of height in priority q
            bricks = bricks - (heights[i]-heights[i-1]);
            if (bricks<0 and ladders>0)     //bricks over but ladders still there
            {
                int top=myQ.top();      //take the max height which is at top of myQ
                myQ.pop();
                ladders--;              //ladder used
                bricks = bricks + top;  //return the bricks which prvsly deducted
            }
            if (bricks<0)     //if both over
                break;
        }
        return i-1;
    }
};
