/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root == NULL || root->val==p->val || root->val==q->val){
//             return root;
//         }
        
//         TreeNode* a=NULL, *b=NULL;
        
//         if(root->val > p->val && root->val > q->val){
//             a=lowestCommonAncestor(root->left, p, q);
//         }
        
//         else if(root->val < p->val && root->val < q->val){
//             b=lowestCommonAncestor(root->right, p, q);
//         }
//         //if p>root and q<root or or q>root or p>root, then call for both
//         else{
//             a=lowestCommonAncestor(root->left, p, q);
//             b=lowestCommonAncestor(root->right, p, q);
//         }
        
//         if(a==NULL && b==NULL){
//             return NULL;
//         }
        
//         if(a!=NULL && b==NULL){
//             return a;
//         }
        
//         if(a==NULL && b!=NULL){
//             return b;
//         }
        
//         if(a!=NULL && b!=NULL){
//             return root;
//         }
//         return root;
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) return root;
    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);
    return !left ? right : !right ? left : root;

    }
};
   
