class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // 2D Dynamic Array in strings given.
        // Output anagram(matching letter counts and contains only the same amount of letters)

        // Map to organize the calculations.
        unordered_map<string, vector<string>> map;

        vector<vector<string>> results;

        for(int i = 0; i < strs.size(); i++)
        {
            // Copy the strings for the key.
            string sortedKey = strs[i];
            sort(sortedKey.begin(), sortedKey.end());

            // Create a new key(sorted string) and add value(original string).
            map[sortedKey].push_back(strs[i]);
        }

        for(auto& pair : map)
        {
            results.push_back(pair.second);
        }

        return results;
    }
};
