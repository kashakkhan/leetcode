class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> an;
        for(int i =1;i<=n;i++){
            if (i % 3 == 0 && i % 5 ==0){
                an.push_back("FizzBuzz");
            }
            else if ( i % 3==0 ){
                an.push_back("Fizz");
            }
            else if (i % 5==0 ){
            an.push_back("Buzz");
            }

            else {
            an.push_back(to_string(i));
            }
        }
        return an;
    }
};