class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        vector<int> results(temperatures.size(), 0);
        stack<pair<int, int>> stack;

        for(int i = 0; i < temperatures.size(); i++)
        {
            int temp = temperatures[i];

            while(!stack.empty() && temp > stack.top().first)
            {
                auto pair = stack.top();
                stack.pop();
                results[pair.second] = i - pair.second;
            }
            stack.push({temp, i});
        }
        return results;
    }
};
