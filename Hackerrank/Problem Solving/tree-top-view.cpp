#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
#include <utility>
#include <unordered_map>
void topView(Node * root) {
    unordered_map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while (!q.empty()){
        pair<Node*, int> n = q.front();
        int val = n.second;
        Node *p = n.first;
        q.pop();

        if (mp.find(val) == mp.end()){
            mp.insert({val,p->data});
            printf("%d ",p->data);
        }
        if (p->left)
            q.push(make_pair(p->left,val-1));
        if (p->right)
            q.push(make_pair(p->right,val+1));
    }
}

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);

    return 0;
}
