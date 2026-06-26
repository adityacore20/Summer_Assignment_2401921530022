class Solution {
public:
    bool checkMirror(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        bool leftSide = checkMirror(p->left, q->right);
        bool rightSide = checkMirror(p->right, q->left);
        
        return leftSide && rightSide;
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        return checkMirror(root->left, root->right);
    }
};
