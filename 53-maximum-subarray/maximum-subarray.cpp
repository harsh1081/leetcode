class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int maxi = nums[0];
        int cs = nums[0];
        for(int i = 1; i < n; i++){
            cs = max(nums[i],cs+nums[i]);
            maxi = max(cs,maxi);
        }
        return maxi;

        
    }
};