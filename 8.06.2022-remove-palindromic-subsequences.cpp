//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/remove-palindromic-subsequences/
//submission link: https://leetcode.com/submissions/detail/717557303/

class Solution {
public:
    int removePalindromeSub(string s) {
        //3 cases in this solution
        //case 1-> if the string is already palindrome then just 1 step is required
        //case 2-> if the string is empty return 0
        //case 3-> if string is not palindromic, as it only contains a's and b's we will need 2 operatioons, 1 to remove all a's and another to remove all b's
        
        if (s.length()==0)
            return 0;
        int i=0;
        int j= s.length()-1;
        while (i<j)
        {
            if (s[i]!=s[j])
                return 2;
            i++;
            j--;
        }
        return 1;
    }
};
