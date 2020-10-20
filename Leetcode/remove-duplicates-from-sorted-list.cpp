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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)
            return head;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast) {
            if (slow->val == fast->val){
                if (!fast->next) {
                    slow->next = nullptr;
                    delete fast;
                    break;
                } else{
                    slow->next = fast->next;
                    delete fast;
                    fast = slow->next;
                }
            } else {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return head;
    }
};