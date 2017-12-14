/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *end = head;
    for(int i=0;i < positionFromTail;i++)
    {
        end = end->next; // moving curr by offset between head and end... 
    }
    while(end->next != NULL){
        end = end->next;
        head = head->next;  // by pushing head too and we know that end is positionFromTail far away from it.
    }
    return head->data;
}

