class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> a ;
        a[0]=-1;
        int sum=0;
        int max_length=0;
        for(int i =0;i<nums.size();i++) {
            if (nums[i]==0) {
                sum--;
            }
            else{
                sum++;
            }
            if (a.find(sum)!= a.end()) {
                int length=i-a[sum];
                max_length=max(max_length,length);
            }
            else{
                a[sum]=i;
            }

        }
        return max_length;
    }

};