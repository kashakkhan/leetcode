class Solution {
public:
    double average(vector<int>& salary) {
        int maxElement = *max_element(salary.begin(), salary.end());
        int minElement = *min_element(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(), 0);

        double result=(double)(sum-maxElement-minElement)/(salary.size()-2);

        return result;
        
    }
};