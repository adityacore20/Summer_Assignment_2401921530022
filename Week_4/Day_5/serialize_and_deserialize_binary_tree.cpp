class Codec {
public:
    string serialize(TreeNode* root) {
        if (root == NULL) {
            return "#";
        }
        string leftStr = serialize(root->left);
        string rightStr = serialize(root->right);
        return to_string(root->val) + "," + leftStr + "," + rightStr;
    }

    TreeNode* deserialize(string data) {
        int index = 0;
        return helper(data, index);
    }

private:
    TreeNode* helper(string& data, int& i) {
        if (i >= data.length()) {
            return NULL;
        }

        if (data[i] == '#') {
            i += 2; 
            return NULL;
        }

        bool isNegative = false;
        if (data[i] == '-') {
            isNegative = true;
            i++;
        }

        int num = 0;
        while (i < data.length() && data[i] != ',') {
            num = num * 10 + (data[i] - '0');
            i++;
        }
        
        if (isNegative) {
            num = -num;
        }
        
        i++; 

        TreeNode* root = new TreeNode(num);
        root->left = helper(data, i);
        root->right = helper(data, i);

        return root;
    }
};
