class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a ;
        vector<int>b;
        vector<int> c;
        for (int i=0 ;i<n;i++){
            a.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            b.push_back(nums[i]);
        }
        for (int i =0;i<n;i++){
            c.push_back(a[i]);
            c.push_back(b[i]);

        }
        return c ;
        
        
    }
};