class Solution {
public:
    void sortColors(vector<int>& nums) {
      // sort(nums.begin(),nums.end()) ;
      for(int j=0;j<nums.size();j++) {
    
      for(int i =0 ;i<nums.size()-j-1;i++) {
        if ( nums[i+1]< nums[i]){
            swap(nums[i],nums[i+1]);
        }
      }
    }
    }
};