class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a ;
        sort(intervals.begin(),intervals.end());
        for(int i =0 ; i<intervals.size();i++) {
            if ( a.empty() || a.back()[1] < intervals[i][0]){
                a.push_back(intervals[i]);
            }
            else {
                a.back()[1]=max(a.back()[1],intervals[i][1]);
            }
        
        }        
        return a ;
    }
};