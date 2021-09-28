class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int maxi=-1,maxd=-1,lefti=-1,righti=-1;
        for(int i=s.length()-1;i>=0;i--){
            if(maxd<s[i]){
                maxd=s[i];
                maxi=i;
                continue;
            }
            if(maxd>s[i]){
                lefti=i;
                righti=maxi;
            }
        }
        if(lefti==-1) return num;
        swap(s[lefti],s[righti]);
        return stoi(s);
    }
};