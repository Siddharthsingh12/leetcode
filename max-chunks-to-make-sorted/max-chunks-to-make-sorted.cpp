class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxv=0,count=0;
        for(int i=0;i<arr.size();i++){
            maxv=max(arr[i],maxv);
            if(i==maxv)
                count++;
        }
        return count;
    }
};