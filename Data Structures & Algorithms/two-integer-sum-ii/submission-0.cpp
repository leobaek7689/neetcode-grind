class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int left = 0;
        int right = numbers.size() - 1;

        vector<int> results;

        while(left < right)
        {
            while(numbers[left] != numbers[right])
            {
                if(numbers[left] + numbers[right] < target)
                {
                    left++;
                }
                else if(numbers[left] + numbers[right] > target)
                {
                    right--;
                }
                else
                {
                    results.push_back(left+1);
                    results.push_back(right+1);
                    return results;
                }
            }
        }
        return results;
    }
};
