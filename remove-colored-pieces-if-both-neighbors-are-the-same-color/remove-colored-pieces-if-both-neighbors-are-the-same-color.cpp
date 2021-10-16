class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.length()<=2) return false;
        int n=colors.length();
        int movesA=0,movesB=0;
        for(int i=0;i<n-2;i++){
            if(colors[i]==colors[i+1]&&colors[i+1]==colors[i+2]){
                if(colors[i]=='A') movesA++;
                else movesB++;
            }
        }
        return movesA>movesB?true:false;
    }
};