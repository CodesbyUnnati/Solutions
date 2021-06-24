#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};

node *newNode(int data)
{
    node* Node=new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
    return (Node);

}
int maxWidth(node* root)
{
    if(!root)
    {
        return 0;
    }
    int result=0;

    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        int count=q.size();
        result=max(count,result);

        while(count--)
        {
            node* temp=q.front();
            q.pop();

            if(temp->left!=NULL)
            q.push(temp->left);
            
            if(temp->right!=NULL)
            q.push(temp->right);
        }
        }
        return result;
    }

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->right = newNode(7);
    root->right->left = newNode(5);
    root->right->right->right = newNode(8);
cout << "Maximum width is " << maxWidth(root) << endl;
    return 0;
}
