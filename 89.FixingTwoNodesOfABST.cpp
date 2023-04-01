// Rest of the code is already given as Driver Code

class Solution 
{
public:
    Node *pre=NULL,*first=NULL,*second=NULL;
void cBst(Node *root)
{
    if(!root)
    return;
    cBst(root->left);
    
    if(pre!=NULL&&root->data<pre->data)
    {
        if(first==NULL){
        first=pre;
        }
        second=root;
        
    }
    pre=root;
    cBst(root->right);
    
}

struct Node *correctBST( struct Node* root )
{
    pre = NULL;
   first = NULL;
   second = NULL;
   
   cBst(root);
   swap(first->data,second->data);
   return root;
    
}
};