class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> a;
        if (s.size() != t.size() ) {
            return false;
        }
        for(int i =0;i<s.size();i++) {
            a[s[i]]++;
            a[t[i]]--;
        }  
        for(auto x :a ){
            if (x.second != 0 ){
                return false;
            }
        }
        return true;
        }
        
              
    
};