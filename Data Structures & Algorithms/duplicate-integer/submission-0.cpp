class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, vector<int>> map;
        
        // Iterate through the array
        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]].push_back(nums[i]);

            if(map[nums[i]].size() > 1)
            {
                return true;
            }
        }

        return false;
    }
};