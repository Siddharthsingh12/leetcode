class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int count[7]={0};
        for(int i=0;i<n;i++){
            count[tops[i]]++;
            count[bottoms[i]]++;
        }
        int v=0;
        for(int i=1;i<7;i++){
            if(count[i]>=n){
                v=i;
                break;
            }
        }
        int counta=0,countb=0;
        if(v==0) return -1;
        for(int i=0;i<n;i++){
            if(tops[i]==bottoms[i]&&tops[i]==v){
                continue;
            }
            else if(tops[i]==v)
                counta++;
            else if(bottoms[i]==v)
                countb++;
            else return -1;
        }
        return counta<countb?counta:countb;
    }
};