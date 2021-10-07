class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        string res="";
        sort(begin(strs), end(strs));
        if(strs[0]=="") return "";
        string a=strs[0], b=strs[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                res+=a[i];
            }
            else break;
        }
        return res;
    }
};