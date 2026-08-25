class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for (auto ch : s) {
            if (ch=='(' || ch=='{' || ch=='[') {
                a.push(ch);
            }
            else {
                if (a.empty()) {
                    return false;
                }
                char top1 =a.top();
                a.pop();

                if( ch=='}' && top1!='{') {
                    return false;
            
                }
                if(ch==']' && top1!='[') {
                    return false;
                }
                if(ch==')' && top1!='(') {
                    return false;
                }
                    

                }
                
            }
        return a.empty();
        }
        
            
        
        
    
};