/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    if(root==NULL)
    {
        return;
    }
    node *curr = root;
    int i=0;
    while(i<s.length())
    {
        if(s[i] - '0'==0)
        {
            curr=curr->left;
            if(curr->data!='\0')
            {
                cout << curr->data;
                curr = root;
                
            }
        }
        else
        {
            curr=curr->right;
            if(curr->data!='\0')
            {
                cout << curr->data;
                curr = root;
             
            }
        }
        i++;
        
    }
}

