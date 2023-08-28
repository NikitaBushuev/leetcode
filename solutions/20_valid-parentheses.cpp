#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for (char c : s) {
            char req = 0;

            switch (c) {
                case ')':
                    req = '(';
                    break;
                case ']':
                    req = '[';
                    break;
                case '}':
                    req = '{';
                    break;
                default:
                    stack.push(c);
                    continue;
            }

            if (req != 0) {
                if (stack.empty() || stack.top() != req) {
                    return false;
                }
                
                stack.pop();
            }
        }

        return stack.empty();
    }
};