class Solution {
public:
    int myAtoi(string s) {
        int isPlus = 1;
        long long res = 0;
        // 먼저 검색하고 - 나 숫자를 찾는다 .
        int i = 0;
        for(;i < s.length(); i++){
            if(s[i] == '-' && s[i+1] >= '0' && s[i+1] <= '9') {
                isPlus = 0;
                i++;
                break;
            }
             if(s[i] == '+' && s[i+1] >= '0' && s[i+1] <= '9') {
                 i++;
                 break;
             }
            
            if(s[i] >= '0' && s[i] <= '9') break;
            else if(isblank(s[i])) continue;
            else return 0; 
                
            
        }
        for(; i < s.length(); i ++){
            if(isblank(s[i]) || !(s[i] >= '0' && s[i] <= '9')) break;;

            if((res * 10) + (s[i] - '0') > INT_MAX){
                if(isPlus == 1){
                    res = INT_MAX;
                }
                else res = INT_MIN;
                break;
            }
            res = (res * 10) + (s[i] - '0');
            
        }
        if(isPlus == 1){
            return res;
        }
        else {
            return -res;
        }
    }
};
