class Solution {
public:
    bool isdigit(char ch){

        if(ch >='0' && ch<='9'){
            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        
        int n = s.size();
        int i  = 0;
        long long num = 0;
        

        while(i < n && s[i] == ' '){
            i++;
        }
        int sign =1;

        if(i < n && (s[i] == '-'   || s[i] == '+')){
            if(s[i] == '-'){
            sign = -1;
            }

            i++;
        }
        while(i<n){

            if(isdigit(s[i])){
                int digit = s[i] - '0';
                num = num*10 + digit;

                if((sign * num) < INT_MIN) return INT_MIN;
                if ((sign*num) >INT_MAX) return INT_MAX;

            }else{
                    break;
            }
            i++;
        }

        
        
         if((sign * num) < INT_MIN) return INT_MIN;
        if ((sign*num) >INT_MAX) return INT_MAX;

            return sign * num;
    }
};