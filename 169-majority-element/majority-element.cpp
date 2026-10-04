class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int f = 0;
        for(int i = 0; i < n; i++){
            if(cnt==0){
                f = nums[i];
            }
            if(nums[i]==f){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return f;
    }
};