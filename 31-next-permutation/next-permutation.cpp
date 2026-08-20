class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i ;
    for( i =nums.size()-2;i>=0;i--) {
        if (nums[i]<nums[i+1]) {
            break;

        }

    }
    if( i >=0){
        int j = nums.size()-1;
        while (nums[j] <= nums[i]) {
        j--;
        }
        swap(nums[i], nums[j]);
                
        }
    
     reverse(nums.begin() + i + 1, nums.end());
        
    }
};