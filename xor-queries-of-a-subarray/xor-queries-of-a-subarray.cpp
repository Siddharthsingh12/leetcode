class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefX(arr.size());
        prefX[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefX[i]=prefX[i-1]^arr[i];
        }
        vector<int>res(queries.size());
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0) res[i]=prefX[queries[i][1]];
            else{
                res[i]=prefX[queries[i][1]]^prefX[queries[i][0]-1];
            }
        }
        return res;
    }
};