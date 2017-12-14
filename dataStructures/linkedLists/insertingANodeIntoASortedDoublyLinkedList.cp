/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node* node = new Node;
    node->data = data;
    node->prev = nullptr;
    node->next = nullptr;
    
    if (!head)
    {
        head = node;
    }
    else
    {
        Node* iter = head;
        while(iter)
        {
            if (data < iter->data)
            {
                node->prev = iter->prev;
                node->next = iter;
                iter->prev = node;
                
                if (node->prev)
                    node->prev->next = node;
                else
                    head = node;
                
                break;
            }
            else if (!iter->next)
            {
                iter->next = node;
                node->prev = iter;
                
                break;
            }
            
            iter = iter->next;
        }
    }
    
    return head;
}

