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
    private: void moveto(ListNode **fromList, ListNode **head){
        ListNode *next = *fromList;
        *fromList = next->next;
        next->next = *head;
        *head = next;
    }
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode list(0);
        ListNode *tail = &list;
        while (true) {
            if (!l1) {
                tail->next = l2;
                break;
            }
            if (!l2){
                tail->next = l1;
                break;
            }
            if (l1->val < l2->val) {
                moveto(&l1,&tail->next);
            } else {
                moveto(&l2,&tail->next);
            }
            tail = tail->next;
        }
        return list.next;
    }
};