class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        /* Returning k most frequent element must be k-1th element in the returned array
        made from the hashmap.
        */

        // Hashmap with key as the number, and value as the number.
        unordered_map<int, int> count;

        // Iterate through the array and add count for each number using their number as a key
        // And increment a value everytime.
        for(int num : nums)
        {
            count[num]++;
        }

        vector<pair<int, int>> arr;
        for (const auto& p : count)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> results;

        for(int i = 0; i < k; i++)
        {
            results.push_back(arr[i].second);
        }
        return results;
    }
};
