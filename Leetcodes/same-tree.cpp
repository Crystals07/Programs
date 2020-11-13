class Solution {
public:
    int data(TreeNode* root)
    {
        if(!root) return 0;
        
        return (root->val);
    }
      
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if((p&&(!q)||((!p)&&q)) ) return 0;
        
        if(!p&&!q) return 1;
        
        if(data(p)!=data(q)) return 0;
           
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};