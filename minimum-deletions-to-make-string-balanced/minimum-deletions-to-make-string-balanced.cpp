class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length(),counta=0,countb=0,res1=0,res2=0,res;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a'){
                counta++;
            } else if(s[i]=='b'){
                if(counta){
                    res1++;
                    counta--;
                }
            }
        }
        // for(int i=n-1;i>=0;i--){
        //     if(s[i]=='b'){
        //         countb++;
        //     } else if(s[i]=='a'){
        //         if(countb){
        //             res2++;
        //             countb--;
        //         }
        //     }
        // }
        // res=min(res1,res2);
        return res1;
    }
};