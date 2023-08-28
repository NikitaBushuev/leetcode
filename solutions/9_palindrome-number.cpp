#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        auto s = to_string(x);
        return s == string(s.rbegin(), s.rend());
    }
};