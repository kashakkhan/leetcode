class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        for (int l=0;l<nums.size();l++){
            a.push_back(nums[l]);
        }
        for (int i=0;i<nums.size();i++){
            a.push_back(a[i]);
        }
        return a;
    }
};