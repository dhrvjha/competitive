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
#include <math.h>
class Solution {
    private: vector<int> getBinary(ListNode* head){
        vector<int> binary;
        while (head){
            binary.insert(binary.begin(),head->val);
            head = head->next;
        }
        return binary;
    }
public:
    int getDecimalValue(ListNode* head) {
        long long dec = 0;
        vector<int> bin = getBinary(head);
        for (int i=0;i<bin.size();i++){
            dec += bin[i]*pow(2,i);
        }
        return dec;
    }
};