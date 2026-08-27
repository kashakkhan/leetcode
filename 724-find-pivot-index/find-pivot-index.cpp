class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum=0;
        int right_sum=0;
        int total_sum=0;
        for(int i =0;i<nums.size();i++) {
            total_sum=total_sum+nums[i];
        }
        for(int i =0;i<nums.size();i++){
            right_sum=total_sum-left_sum-nums[i];
            if (right_sum==left_sum){
                return i ;
            }
            else {
                left_sum=left_sum+nums[i];
            }
        }
        return -1;
        
    }
};