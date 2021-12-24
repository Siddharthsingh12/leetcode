class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length(),res=0;
        stack<char> st;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a')
                st.push(s[i]);
            else if(s[i]=='b'&&!st.empty()){
                res++;
                st.pop();
            }
        }
        return res;
    }
};