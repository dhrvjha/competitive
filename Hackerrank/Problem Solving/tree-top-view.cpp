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
int height(Node *root){
    if (!root)
        return -1;
    int lheight = height(root->left);
    int rheight = height(root->right);
    if (lheight>rheight)
        return lheight+1;
    return rheight+1;
}
void printGivenLevel(Node *root,int level){
    if (!root)
        return;
    if (level == 1)
        printf("%d ",root->data);
    else if (level > 1){
        printGivenLevel(root->left,level-1);
        printGivenLevel(root->right,level-1);
    }
}
list<int> levelOrder(Node * root) {
    list<int> m;
    int h = height(root)+1;
    for (int i=1;i<=h;i++)
        m.push_back(root->data);
    return m;
}
int priority(list<int> l,int a, int b){
    for (list<int>::iterator it = l.begin();it!=l.end();++it){
        if (*it == a)
            return a;
        else if (*it == b)
            return b;
    }
    return -1;
}
#include <utility>
#include <unordered_map>
void topView(Node * root) {
    unordered_map<int,int> mp;
    stack<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    list<int> l;
    while (!q.empty()){
        pair<Node*, int> n = q.top();
        int val = n.second;
        Node *p = n.first;
        q.pop();
        if (mp.find(val) == mp.end())
            mp.insert({val,p->data});
        else{
            int da = mp[val];
            mp[val] = priority(l,da,p->data);
        }
        if (p->left)
            q.push(make_pair(p->left,val-1));
        if (p->right)
            q.push(make_pair(p->right,val+1));
    }
    for (unordered_map<int,int>::iterator i=mp.begin();i!=mp.end();i++)
        cout << i->second << " ";
    cout << endl;
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
