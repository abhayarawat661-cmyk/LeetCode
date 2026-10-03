class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0,close=0;
        int ans1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open++;
            }
            if(s[i]==')'){
                close++;
            }
            if(open==close){
                ans1=max(ans1,2*open);
            }
            if(open<close){
                open=0;
                close=0;
            }
        }
        open=0;
                close=0;
        int ans2=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='('){
                open++;
            }
            if(s[i]==')'){
                close++;
            }
            if(open==close){
                ans2=max(ans2,2*open);
            }
            if(open>close){
                open=0;
                close=0;
            }
        }
      int  ans=max(ans1,ans2);
        return ans;
    }
};