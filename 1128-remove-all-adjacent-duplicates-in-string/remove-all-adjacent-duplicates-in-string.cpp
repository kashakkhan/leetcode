class Solution {
public:
    string removeDuplicates(string s) {
    stack<char> st;
        for(char ch : s) {
            if (st.empty()) {
                st.push(ch);
            }
            else if (st.top()==ch) {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
        string h ="";
        while (!st.empty()) {
            h+=st.top();
            st.pop();
        }
        reverse(h.begin(),h.end());
        return h;
    }
};