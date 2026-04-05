class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int left = 0;
        int right = heights.size() - 1;

        int max = 0;

        // Loop through the pointers and set the max water 
        while(left < right)
        {
            if((min(heights[left],heights[right]) * (right - left)) > max)
            {
                max = min(heights[left],heights[right]) * (right - left);
            }

            if(heights[left] <= heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max;
    }
};
