class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.length();
        bool flag=false;
        if(n==1) return "";
        for(int i=0;i<n;i++){
            if(palindrome[i]!='a'&&i!=n/2){
                flag=true;
                palindrome[i]='a';
                break;
            }
        }
        if(flag) return palindrome;
        palindrome[n-1]='b';
        return palindrome;
    }
};