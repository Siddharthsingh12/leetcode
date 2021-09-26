class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v(26,-1);
        for(int i=s.length()-1;i>=0;i--){
            if(v[s[i]-'a']==-1){
                v[s[i]-'a']=i;
            }
        }
        vector<int> ans;
        int pos=-1,partLen=0;
        for(int i=0;i<s.length();i++){
            int x=v[s[i]-'a'];
            pos=max(pos,x);
            partLen++;
            if(i==pos){
                ans.push_back(partLen);
                pos=-1; partLen=0;
            }
        }
        return ans;
    }
};