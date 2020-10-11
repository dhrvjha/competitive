#include <bits/stdc++.h>

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
void levelOrder(Node * root) {
    int h = height(root)+1;
    for (int i=1;i<=h;i++)
        printGivenLevel(root,i);
    return;
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
  
    myTree.levelOrder(root);

    return 0;
}
