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

static int x = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    return x;
   
}();  


class Solution {
public:
    
   
    bool isMirror(TreeNode* p1,TreeNode* p2)
    {
        if(!p1&&!p2) return 1;
        
        if(!p1&&p2) return 0;
        
        if(!p2&&p1) return 0;
        
        if(p1->val==p2->val)
        {
            if(isMirror(p1->left,p2->right)&&isMirror(p1->right,p2->left)) return 1;
        }
        
        return 0;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
        return isMirror(root,root);
        
    }
};