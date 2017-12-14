#include <queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  queue<node*> q;
    if(root==NULL)
    {
        return;
    }
    if (root) {
        q.push(root);
    }
    while (!q.empty())
    {
        node * temp= q.front();
        q.pop();
        cout<<temp->data<<" ";

        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }

}

