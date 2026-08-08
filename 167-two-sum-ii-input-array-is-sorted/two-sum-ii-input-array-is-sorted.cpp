class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> a;
        while(left<right) {
            if (numbers[left]+numbers[right]==target ) {
                a.push_back(left+1);
                a.push_back(right+1);
                return a;
            }
            else if (numbers[left]+numbers[right] > target) {
                right--;

            }
            else {
                left++;
                
            }
        }  
        return {};  }
};