class Solution {
public:
    int balancedStringSplit(string s) {
        int n = 0, l = 0, r = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L') l++;
            else if(s[i] == 'R') r++;
            if(l == r) n++;
        }

        return n;
    }
};
