class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mini = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            mini = min(mini,nums[mid]);
            if(nums[high]>=nums[mid]){
                high = mid-1;
            }
            else if(nums[low]<=nums[mid]){
                low = mid+1;
            }
        }
        return mini;


        
    }
};