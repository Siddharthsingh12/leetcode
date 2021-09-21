class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int temp=-1;
        int n=s.length();
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[s[i]]==1){
                temp=i;
                break;
            }
        }
        return temp;
    }
};