class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low + high)/2;

            int maxrow = 0;
            for(int i=0;i<n;i++){
                if(mat[i][mid] > mat[maxrow][mid]){
                    maxrow = i;
                }
            }
            int left = -1;
            int right = -1;

            if(mid > 0){
                left = mat[maxrow][mid - 1];
            }
            if(mid < m-1){
                right = mat[maxrow][mid + 1];
            }
            if (mat[maxrow][mid] > left &&
                mat[maxrow][mid] > right){
                    return{maxrow,mid};
                }
            if(right > mat[maxrow][mid]){
                low = mid + 1;
            }   
            else{
                high = mid - 1;
            } 

        }
        return{-1,-1};
        
    }
};