//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/
//submission link: https://leetcode.com/submissions/detail/732813841/

class Solution {
public:
    int minPartitions(string n) {
        char max = '0';
        for(char x:n)
        {
            if(x > max) 
            { 
                max=x;
            }
        }
        return (max-'0');
    }
};
