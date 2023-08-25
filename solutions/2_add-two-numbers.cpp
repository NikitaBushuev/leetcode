#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val = 0, ListNode* next = nullptr) : val(val), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;
        
        while (l1 || l2) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            
            int _sum = val1 + val2 + carry;
            carry = _sum / 10;
            
            current->next = new ListNode(_sum % 10);
            current = current->next;
            
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        
        if (carry) {
            current->next = new ListNode(carry);
        }
        
        return dummy->next;
    }
};