class Solution {
public:
    string encode(vector<string>& strs) {

        string results = "";

        for(int i = 0; i < strs.size(); i++)
        {
            results += to_string(strs[i].length()) + "#" + strs[i];
        }

        return results;
    }

    vector<string> decode(string s) {

        vector<string> results;

        int i = 0;

        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#') j++;

            int length = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, length);
            results.push_back(word);
            i = j + 1 + length;
        }

        return results;
    }
};
