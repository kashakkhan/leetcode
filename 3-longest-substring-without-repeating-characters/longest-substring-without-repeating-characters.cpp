class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int max_count=0;
        vector<int>a;
        for(int right=0 ;right<s.size();right++) {
            while (find(a.begin(),a.end(),s[right] ) !=a.end()) {
                a.erase(a.begin());
                
            }
            a.push_back(s[right]);

            if (a.size() > max_count){
                max_count=a.size();
            }
        }
        return max_count;
        
    }
};