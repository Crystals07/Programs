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
    bool inRange(long long int min,long long int max,long long int val)
    {
        return (val>min&&val<max)? 1:0;
    }
    
    bool isBST(long long int min,long long int max,TreeNode* root)
    {
       if(!root) return 1;
        
       if(inRange(min,max,root->val))
       {
           if(isBST(min,root->val,root->left)&&isBST(root->val,max,root->right)) return 1;
       }
                    
         return 0;      
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root) return 1;
        
        long long ll= INT_MIN,ll2 = INT_MAX;
        
        ll = 2*ll,ll2 = 2*ll2;
        
        return isBST(ll,root->val,root->left)&&isBST(root->val,ll2,root->right) ;
    }
};