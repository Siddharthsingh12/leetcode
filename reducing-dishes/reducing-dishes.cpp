class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int target=0,sum=0;
        for(int i=satisfaction.size()-1;i>=0;i--){
            if(satisfaction[i]+target>0){
                target+=satisfaction[i];
                sum+=target;
            }
        }
        return sum;
    }
};