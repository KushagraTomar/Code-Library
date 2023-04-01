// Rest of the code is already given as Driver Code

Node* insert(Node* root, int key)
{
     if(root==NULL) 
    {
        return new Node(key);
    }
    
    if (key < root->data)
        root->left  = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}
