class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, vector<char>> smap;

        unordered_map<char, vector<char>> tmap;

        if (s.size() != t.size()) return false;

        for(int i = 0; i < s.size(); i++)
        {
            smap[s[i]].push_back(s[i]);
        }

        for(int j = 0; j < t.size(); j++)
        {
            tmap[t[j]].push_back(t[j]);
        }

        if(smap == tmap)
        {
            return true;
        }

        return false;
    }
};
