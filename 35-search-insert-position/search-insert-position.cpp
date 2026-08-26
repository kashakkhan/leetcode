class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if (nums[i]==target) {
                return i;
            }}
            int k =target;
            if (find(nums.begin(),nums.end(),k)==nums.end()){
                nums.push_back(k);
                

            }
        
        sort(nums.begin(),nums.end());
        int a =find(nums.begin(),nums.end(),target)-nums.begin();
        return a ;
    }
};