class Solution {
public:
    bool check(char x,char y){
        if((x==')'&&y=='(')||(x==']'&&y=='[')||(x=='}'&&y=='{')){
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                    st.push(s[i]);
            else{
                if(st.empty()) return false;
                else if(check(s[i],st.top())==false) return false;
                st.pop();
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};