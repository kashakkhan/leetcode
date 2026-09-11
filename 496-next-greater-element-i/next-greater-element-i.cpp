class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        for(auto x : nums1){
            bool found=false;
            for(int i =0;i<nums2.size();i++){
                if (nums2[i]==x) {
                    for(int j =i+1;j<nums2.size();j++){
                        if (nums2[j]>x ) {
                            ans.push_back(nums2[j]);
                            found= true;
                            break;
                        }              
                    }
                    if(!found) {
                        ans.push_back(-1);
                    }
                }
            }
        }return ans;   }
};