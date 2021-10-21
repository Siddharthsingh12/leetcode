class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0,j=0,k=0,n=s.length();
        while(k<n){
            while(k<n&&s[k]!=' '){
                s[j++]=s[k++];
            }
            if(i<j){
                reverse(s.begin()+i,s.begin()+j);
                if(j==n) break;
                s[j++]=' ';
                i=j;
            }
            k++;
        }
        if(j>0&&s[j-1]==' ') j--;
        s.resize(j);
        return s;
    }
};