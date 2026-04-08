class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        // The sum of all bananas being greater than h means it requires more than just 

        // The upperbound of k must be the largest size in the pile.

        // ceil (62 / 25 ) = 3

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        int results = right;

        while(left <= right)
        {
            int k = (left + right) / 2;

            long long totalTime = 0;
            for(int p : piles)
            {
                totalTime += ceil(static_cast<double>(p) / k);
            }

            if(totalTime <= h)
            {
                results = k;
                right = k - 1;
            }
            else
            {
                left = k + 1;
            }
        }
        return results;
    }
};
