class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum_digits = 0;
            while (num > 0) {
                sum_digits += (num % 10);
                num /= 10;
            }
            num = sum_digits;
        }
        return num;
    }
};
