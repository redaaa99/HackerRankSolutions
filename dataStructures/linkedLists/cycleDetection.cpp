/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
   Node* two = head, *one = head;  
   while(two!= NULL){  
     two = two->next->next;  
     one = one->next;  
     if(two == one){  
       return 1;  
     }  
   }return 0;  
}

