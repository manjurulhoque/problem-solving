class Solution {
public:
    string generateTheString(int n) {
        string s;
        if(n % 2 == 0) {
            if(n != 2) {
                int m = n / 2 + 1;
                if(m % 2 == 0) m--;
                n -= m;
                for(int i = 1; i <= m; i++) {
                    s += 'a';
                }
                for(int i = 1; i <= n; i++) {
                    s += 'b';
                }
            } else {
                int m = 1;
                n -= m;
                for(int i = 1; i <= m; i++) {
                    s += 'a';
                }
                for(int i = 1; i <= n; i++) {
                    s += 'b';
                }
            }
        }
        else {
            for(int i = 1; i <= n; i++) {
                s += 'c';
            }
        }

        return s;
    }
};
