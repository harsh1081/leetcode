class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; int high = n-1;
        int i = -1; int j = -1;
        vector<int>ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    i = mid;
                }
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        low=0;high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){
                    j = mid;
                }
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return{j,i};
        
    }
};