class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.length()<p.length()) return res;
        vector<int> a(26,0),b(26,0);
        for(int i=0;i<p.length();i++){
            a[s[i]-'a']++;
            b[p[i]-'a']++;
        }
        if(a==b) res.push_back(0);
        for(int i=p.length();i<s.length();i++){
            a[s[i]-'a']++;
            a[s[i-p.length()]-'a']--;
            if(a==b) res.push_back(i-p.length()+1);
        }
        return res;
    }
};