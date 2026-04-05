class Solution {
public:
    bool isValid(string s) 
    {
        // Initiate stack
        stack<char> st;

        unordered_map<char, char> map;
        map[')'] = '(';
        map[']'] = '[';
        map['}'] = '{';

        char c;

        for(int i = 0; i < s.size(); i++)
        {
            c = s[i];

            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            
            if( c == ')' || c == ']' || c == '}')
            {
                if(st.empty())
                {
                    return false;
                }
                else if(map[c] != st.top())
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
                
        }

        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
