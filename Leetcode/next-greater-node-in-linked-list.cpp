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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nodes;
        stack<int> s;
        
        while(head){
            nodes.push_back(head->val);
            head = head->next;
        }
        vector<int> ans(nodes.size(), 0);
        for(int i = nodes.size()-1; i >=0; i--){
            while(! s.empty()){
                if(s.top() <= nodes[i])
                     s.pop();
                else break;
            }
            if(s.empty())
                ans[i] = 0;
            else
                ans[i] = s.top();
            s.push(nodes[i]);
        }
        return ans;
    }
};