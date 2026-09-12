class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> an;
        for(int i =0;i<nums.size();i++) {
            bool a = false;
            for(int j =i+1;j<nums.size();j++){
                if (nums[j]>nums[i]) {
                    a = true;
                    an.push_back(nums[j]);
                    break;
                }}
            
            if ( !a) {
                for(int j =0;j<i;j++) {
                    if (nums[j]>nums[i]){
                        an.push_back(nums[j]);
                        a=true;
                        break;
                    }
                }
            }
            if (!a) {
                an.push_back(-1);
            }
            }
            
        



        return an;
        
    }
};