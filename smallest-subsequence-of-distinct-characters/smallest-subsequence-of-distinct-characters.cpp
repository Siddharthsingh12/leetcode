class Solution {
public:
    string smallestSubsequence(string s) {
        int count[26]={},visited[26]={};
        string res="";
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            --count[s[i]-'a'];
            if(visited[s[i]-'a']++>0) continue;
            while(!res.empty()&&res.back()>s[i]&&count[res.back()-'a']>0){
                visited[res.back()-'a']=0;
                res.pop_back();
            }
            res.push_back(s[i]);
        }
        return res;
    }
};