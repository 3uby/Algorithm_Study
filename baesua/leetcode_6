/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int i = 0,j = 0;
        int correct=0;
        vector<int> arr;
        string res;
        while(i <= s.length()){
            arr.push_back(j);
            if(correct){
                j--;
            }
            else {
                j++;
            }
            if(j >= numRows-1){
                correct = 1;
            }
            else if(j <= 0){
                correct = 0;
            }
            i++;
        }
       
        for(int i = 0; i <= numRows;i++){
            for(int j = 0 ; j < s.length(); j++){
                if(i == arr[j]){
                    res += s[j];
                }
            }

        }
        cout << s.length();
        return res;
    }
};
// @lc code=end

