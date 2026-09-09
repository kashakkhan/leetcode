class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string ch: logs) {
            if ( ch == "../"){
                if(!st.empty()){
                st.pop();      }             
            
            }
            else if(ch== "./"){
                continue;
            }
            else {
                st.push(ch);
            }
        }
        return (st.size());
        
        
        
    }
};