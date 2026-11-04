class Solution {
public:
    int num(char c) {
        if(c == 'I')
            return 1;
        else if(c == 'V')
            return 5;
        else if(c == 'X')
            return 10;
        else if(c == 'L')
            return 50;
        else if(c == 'C')
            return 100;
        else if(c == 'D')
            return 500;
        else
            return 1000;
    }

    int romanToInt(string s) {
        int ans = 0;

        for(int i = 0; i < s.length(); i++) {
            if(i + 1 < s.length() && num(s[i]) < num(s[i + 1])) {
                ans -= num(s[i]);
            }
            else {
                ans += num(s[i]);
            }
        }

        return ans;
    }
};