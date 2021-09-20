class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int begin=0,end=n*m-1;
        while(begin<=end){
            int mid=(begin+end)/2;
            int temp=matrix[mid/m][mid%m];
            if(temp==target){
                return true;
            }
            else if(temp<target){
                begin=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};