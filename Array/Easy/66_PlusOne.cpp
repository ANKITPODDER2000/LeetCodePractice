class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size();
        for(int i = n-1 ; i>=0 ; i--){
            int v = digits[i]+carry;
            carry = v / 10;
            v %= 10;
            digits[i] = v;
        }
        if(carry > 0) digits.insert(digits.begin() , carry);
        return digits;
    }
};
