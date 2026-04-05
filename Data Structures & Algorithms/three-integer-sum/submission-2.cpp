class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        /* Sort the array so that getting their pointer would results in ordered pair

        Test case after sorting, [-4,-1,-1,0,1,2]

        First pointer should be on -4, and use other two pointers to iterate from after
        first pointer with last index, if the sum of the second pointer(s) with the sum of
        first pointer, the its a valid triplets.

        */

        int first_left = 0;

        int second_left = first_left + 1;
        int second_right = nums.size() - 1;

        vector<vector<int>> results;

        sort(nums.begin(), nums.end());

        while(first_left < nums.size() - 1)
        {
            while(second_left < second_right)
            {
                if((nums[first_left] + (nums[second_left] + nums[second_right])) == 0)
                {
                    results.push_back({nums[first_left], nums[second_left], nums[second_right]});
                    second_left++;
                    second_right--;

                    while(nums[second_left] == nums[second_left - 1])
                    {
                        second_left++;
                    }

                    while(nums[second_right] == nums[second_right + 1])
                    {
                        second_right--;
                    }
                }
                else if(nums[first_left] + (nums[second_left] + nums[second_right]) < 0)
                {
                    second_left++;
                }
                else if(nums[first_left] + (nums[second_left] + nums[second_right]) > 0)
                {
                    second_right--;
                }
            }
            first_left++;

            while(first_left < nums.size() && nums[first_left] == nums[first_left - 1])
            {
                first_left++;
            }

            second_left = first_left + 1;
            second_right = nums.size() - 1;
        }
        return results;
    }
};
