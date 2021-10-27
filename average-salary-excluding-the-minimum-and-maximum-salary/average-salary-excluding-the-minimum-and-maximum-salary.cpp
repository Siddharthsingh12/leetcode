class Solution {
public:
    double average(vector<int>& salary) {
        int minS=INT_MAX,maxS=INT_MIN,n=salary.size();
        for(int i=0;i<n;i++){
            minS=min(minS,salary[i]);
            maxS=max(maxS,salary[i]);
        }
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }
        sum=sum-(minS+maxS);
        return sum/(n-2);
    }
};