class Solution {
public:
    string removeDuplicateLetters(string s) {
        int count[26]={},visit[26]={};
        string res="";
        for(auto x:s) count[x-'a']++;
        for(auto x:s){
            --count[x-'a'];
            if(visit[x-'a']++>0) continue;
            while(!res.empty()&&res.back()>x&&count[res.back()-'a']>0){
                visit[res.back()-'a']=0;
                res.pop_back();
            }
            res.push_back(x);
        }
        return res;
    }
};