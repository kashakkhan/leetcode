class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string ch: tokens){
            if (ch == "+"){
                int first=st.top();
                st.pop();
                int second= st.top();
                st.pop();
                int k = first+second;
                st.push(k);
            }  
            else if (ch == "/"){
                int a=st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = b/a;
                st.push(c);
            }

            else if ( ch =="*"){
                int k = st.top();
                st.pop();
                int j =st.top();
                st.pop();
                int l = k*j;
                st.push(l);
            }
            else if ( ch=="-"){
                int u = st.top();
                st.pop();
                int v =st.top();
                st.pop();
                st.push(v-u);
            }
            else {
                st.push(stoi(ch));
            }   
                  }
            return ( st.top()) ;   
    }
};