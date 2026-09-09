class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for( string x : operations ){
            if ( x == "C"){
                st.pop();
            }
            else if ( x == "D"){
                st.push(st.top()*2);
            }
            else if ( x == "+"){
                int k=st.top();
                st.pop();
                int j =st.top();
                st.pop();
                st.push(j);
                st.push(k);
                int a = k+j;
                st.push(a);
            }
            else {
                st.push(stoi(x));
        }}
        int an=0;
        while(!st.empty()){
            an+=st.top();
            st.pop();

        }
        return an;


    }
};