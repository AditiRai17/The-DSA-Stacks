/*
    Given a signed 32-bit integer x, return x with its digits reversed.
    If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
    Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
    ---------------------
    Example 1:

    Input: x = 123
    Output: 321
    ----------------------
    Example 2:

    Input: x = -123
    Output: -321
    ----------------------
    Example 3:

    Input: x = 120
    Output: 21

---------------------
Constraints:

-231 <= x <= 231 - 1



INT_MIN = –2147483648 = 2^31       (for 32-bit Integers)
INT_MAX = 2147483647  = (2^31) -1  (for 32-bit Integers)


*/

class Solution
{
public:
    int reverse(int x)
    {
        int r = 0;
        for (int i = x; i != 0; i /= 10)
        {
            int d = i % 10;
            if (r > INT_MAX / 10 || r == INT_MAX / 10 && d > 7)
            {
                return 0;
            }

            if (r < INT_MIN / 10 || r == INT_MIN / 10 && d < -8)
            {
                return 0;
            }
            r = r * 10 + d;
        }
        return r;
    }
};