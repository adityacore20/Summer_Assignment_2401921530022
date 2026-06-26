class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return helper(preorder, 0, n - 1, inorder, 0, n - 1);
    }

private:
    TreeNode* helper(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd) {
        if (preStart > preEnd || inStart > inEnd) {
            return NULL;
        }

        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);

        int rootIdx = -1;
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == rootVal) {
                rootIdx = i;
                break;
            }
        }

        int leftTreeSize = rootIdx - inStart;

        root->left = helper(preorder, preStart + 1, preStart + leftTreeSize, inorder, inStart, rootIdx - 1);
        root->right = helper(preorder, preStart + leftTreeSize + 1, preEnd, inorder, rootIdx + 1, inEnd);

        return root;
    }
};
