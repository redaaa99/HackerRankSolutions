#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    // This is a "method-only" submission.   
  // You only need to complete this method.   
   if(head == NULL)
    return;
 
  // print the list after head node
  ReversePrint(head->next);
 
  // After everything else is printed, print head
  cout<<head->data<<endl;   
}

