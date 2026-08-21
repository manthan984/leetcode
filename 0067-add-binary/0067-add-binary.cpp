class Solution {
public:
    string addBinary(string a, string b) {
        while (a.size() < b.size()) a = '0' + a;
        while (b.size() < a.size()) b = '0' + b;

        int carry = 0;
        string result = "";
        int addition;
        for (int i = a.size() - 1; i >= 0; i--){
            addition = carry + (a[i] - '0') + (b[i] - '0');
            if (addition == 0){
                result += "0";
                carry = 0;
            } else if (addition == 1){
                result += "1";
                carry = 0;
            } else if (addition == 2){
                result += "0";
                carry = 1;
            } else if (addition == 3){
                result += "1";
                carry = 1;
            }
        }
        if (carry) result += '1';
        reverse(result.begin(),result.end());
        return result;
    }
};