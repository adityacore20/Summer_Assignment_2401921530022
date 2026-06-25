class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        calculateMaxGain(root, maxSum);
        return maxSum;
    }

private:
    int calculateMaxGain(TreeNode* node, int& maxSum) {
        if (!node) return 0;

        int leftGain = max(calculateMaxGain(node->left, maxSum), 0);
        int rightGain = max(calculateMaxGain(node->right, maxSum), 0);

        int currentPathSum = node->val + leftGain + rightGain;
        maxSum = max(maxSum, currentPathSum);

        return node->val + max(leftGain, rightGain);
    }
};
