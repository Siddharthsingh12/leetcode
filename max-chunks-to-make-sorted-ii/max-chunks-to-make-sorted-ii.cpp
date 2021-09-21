class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        long long int sum1=0,sum=0,count=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            sum1+=temp[i];
            if(sum==sum1)
                count++;
        }
        return count;
    }
};