int isPair(Node* root,unordered_set<int> &inorder,int target)
{
    if(!root) return 0;
    
    if(inorder.find(target-root->data)!=inorder.end()) return 1;
    
    inorder.insert(root->data);
    
    return isPair(root->left,inorder,target)||isPair(root->right,inorder,target);
}


int isPairPresent(struct Node *root, int target)
{
    unordered_set<int> inorder;
    
    return isPair(root,inorder,target);
}