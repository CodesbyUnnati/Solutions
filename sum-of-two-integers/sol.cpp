class Solution {
public:
    int getSum(int a, int b) {
        int carry= a&b;
        int sum_without_carry= a^b;
        int actual_carry= carry<<1;

        while(carry!=0)
        {
            carry = sum_without_carry & actual_carry;
            sum_without_carry = sum_without_carry ^ actual_carry;
            actual_carry = carry<<1;
        }
        return sum_without_carry;
    }
};
