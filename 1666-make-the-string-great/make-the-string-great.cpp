class Solution {
public:
    string makeGood(string s) {
    stack<char> st;
    for(char ch : s) {
        if (!st.empty() && abs(st.top()-ch)==32) {
            st.pop();
        }
        else {
            st.push(ch);
        }
    }
    string k ="";
    while(!st.empty()){
        k+=st.top();
        st.pop();
    }
    reverse(k.begin(),k.end());
    return k ;

    }
};