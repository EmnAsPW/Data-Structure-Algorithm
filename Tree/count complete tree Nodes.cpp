class Solution
{
public:
    int findHeightLeft(TreeNode *node)
    {
        int height = 0;
        while (node != NULL)
        {
            height++;
            node = node->left;
        }
        return height;
    }
    int findHeightRight(TreeNode *node)
    {
        int height = 0;
        while (node != NULL)
        {
            height++;
            node = node->right;
        }
        return height;
    }

    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = findHeightLeft(root);
        int rh = findHeightRight(root);

        if (lh == rh)
            return (1 << lh) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};