class Solution {
public:
    void dfs(TreeNode* root, vector<int> &res){
        if(!root) return;
        res.push_back(root->val);
        if(root->left) dfs(root->left,res);
        if(root->right) dfs(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root,res);
        return res;
    }
};