/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA, *pB = headB, *result;
            
        // set the flag
        while (pA) {
            pA->val *= -1;
            pA = pA->next;
        }
            
        // find the intersection
        while (pB && pB->val > 0) pB = pB->next;
        result = pB;
            
        // unset the flag
        pA = headA;
        while (pA) {
            pA->val *= -1;
            pA = pA->next;
        }
            
        return result;
    }
};