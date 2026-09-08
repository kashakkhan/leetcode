class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ad ;
        for(char ch : s) {
            if (ch=='#') {
                if(!ad.empty()) {
                ad.pop();
            }}

          
            else {
                ad.push(ch);
            }
            
            
        
        }
        stack<char> at;
        for(char ch : t ) {
            if (ch=='#'){
                if(!at.empty()){
                at.pop();
            }}
            
            else {
                at.push(ch);
            }
        }
        string k ="";
        while (!ad.empty()) {
            k+=ad.top();
            ad.pop();
        }
        string l="";
        while(!at.empty()){
            l+=at.top();
            at.pop();
        }
        reverse(k.begin(),k.end());
        reverse(l.begin(),l.end());
        if (k==l){
            return true;
        }
        else{
            return false;
        }


        
        
    }
};