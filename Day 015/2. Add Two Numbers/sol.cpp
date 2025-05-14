/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getLen(ListNode* head) {
        int result = 0;
        ListNode* curr = head;
        while (curr != NULL) {
            ++result;
            curr = curr->next;
        }
        return result;
    }

    void addTwoReversedNumbers(ListNode* r_l1, ListNode* r_l2) {
        ListNode *p_l1 = NULL, *c_l1 = r_l1, *c_l2 = r_l2;
        bool carry = false;
        while (c_l2 != NULL) {
            c_l1->val += c_l2->val + carry;
            carry = (c_l1->val >= 10);
            c_l1->val %= 10;
            p_l1 = c_l1;
            c_l2 = c_l2->next;
            c_l1 = c_l1->next;
        }

        while (c_l1 != NULL) {
            c_l1->val += carry;
            carry = (c_l1->val >= 10);
            c_l1->val %= 10;
            p_l1 = c_l1;
            c_l1 = c_l1->next;
        }

        if (carry) p_l1->next = new ListNode(carry);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (getLen(l1) < getLen(l2)) swap(l1, l2);

        addTwoReversedNumbers(l1, l2);
        return l1;
    }
};