class Solution {
    public:
        int titleToNumber(string columnTitle) {
            int sum1 = 0;
            for (char c : columnTitle) {
                sum1 = sum1 * 26 + (c - 'A' + 1);
            }
            return sum1;
        }
    };