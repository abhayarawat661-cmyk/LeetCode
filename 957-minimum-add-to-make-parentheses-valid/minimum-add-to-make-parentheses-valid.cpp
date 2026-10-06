class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int answer = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                balance++;
            }
            else
            {
                if(balance > 0)
                {
                    balance--;
                }
                else
                {
                    answer++;
                }
            }
        }
        return answer + balance;
    }
};