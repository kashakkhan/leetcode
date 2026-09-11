class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        /*vector <int> ans;
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
        }return ans;   }*/
        stack<int>a;
        unordered_map<int,int> mp;
        for(auto x : nums2) {
            if (a.empty() ) {
                a.push(x);
            }
            else {
                while ( !a.empty() && x > a.top()) {
                    mp[a.top()]=x;
                    a.pop();
                }
                a.push(x);
            }
           }
           while (!a.empty()) {
            mp[a.top()]=-1;
            a.pop();           }
        

        vector<int> ans;
        for(auto x : nums1) {
        
            ans.push_back(mp[x]);
           
        }
        return ans;
    }
};