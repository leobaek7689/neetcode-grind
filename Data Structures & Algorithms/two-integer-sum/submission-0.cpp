class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //Make the hashmap for keeping track of numbers.
        unordered_map<int, int> map;

        vector<int> results = {}; 

        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];

            if(map.count(diff))
            {
                results.push_back(map[diff]);
                results.push_back(i);
                return results;
            }

            map[nums[i]] = i;
        }

        return results;
    }
};
