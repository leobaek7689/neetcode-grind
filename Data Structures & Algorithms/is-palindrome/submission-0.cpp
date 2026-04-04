class Solution {
public:
    bool isPalindrome(string s) 
    {
        // Two pointers
        int left = 0;
        int right = s.size() - 1;

        // Check if each end of the pointer is equal in lowercase.
        while(left < right)
        {
            while(left < right && !isalnum(s[left]))
            {
                left++;
            }
            while(right > left && !isalnum(s[right]))
            {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
