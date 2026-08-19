class Solution {
public:
    bool canJump(vector<int>& nums) {
        int left=0;
        int a=0;
        while (left<nums.size()) {
            if (left>a ) {
                return false ;
            }
            a=max(a,left+nums[left]);
            if (a>=nums.size()-1) {
                return true ;
            }
            left++;
        }
              
        
    return false; 
    }
};