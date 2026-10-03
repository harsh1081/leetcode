class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int ones = 0;
        for(int i = 0; i < n; i ++){
            
            if(nums[i]==1){
                ones++;
                cnt = max(cnt,ones);

            }
            if(nums[i]==0){
                ones = 0;

            }
        }
        return cnt;
        
    }
};