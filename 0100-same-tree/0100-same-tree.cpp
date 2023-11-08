/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool is(TreeNode*p,TreeNode*q){
        if(!p){
            if(!q)
            return true;
            return false;
        }
        else if(!q){
            if(!p)
            return true;
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        if(!(is(p->left,q->left)) || !(is(q->right,p->right)))
        return false;
        
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return is(p,q);
    }
};