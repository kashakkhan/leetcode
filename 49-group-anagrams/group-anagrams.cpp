class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map <string,vector<string>> a ;
    for(string x : strs) {
        string y =x ;
        sort(y.begin(),y.end());
        a[y].push_back(x);

        
    }
    vector<vector<string>>ans;
    for(auto x : a){
        ans.push_back(x.second);


    }
    return ans;
        
    }
};