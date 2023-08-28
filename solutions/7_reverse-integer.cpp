#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        auto MAX_INT = (1LL << 31) - 1;
        auto MIN_INT = -1 * (1LL << 31);

        auto reverse = 0;

        while (x != 0) {
            if (reverse > MAX_INT / 10 || reverse < MIN_INT / 10) {
                return 0;
            }

            auto digit = x > 0 ? x % 10 : x % -10;

            reverse = reverse * 10 + digit;

            x = trunc(x / 10);
        }

        return reverse;
    }
};