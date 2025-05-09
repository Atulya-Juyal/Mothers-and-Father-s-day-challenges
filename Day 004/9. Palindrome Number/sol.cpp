class Solution {
    public:
        bool isPalindrome(int x) {
            if ( x < 0)
                return false;
            uint rev = 0;
            uint num = x;
            while ( num > 0 )
            {
                rev = rev*10 + num%10;
                num = num/10;
            }
            return (rev == x);
        }
    };