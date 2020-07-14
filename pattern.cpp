#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *link;
}Node;
 
// Function to skip M nodes and then remove N nodes of the linked list.
void SkipAndRemove(node  *head, int M, int N)
{
    node *current = head, *t;
    int count;
  
    while (current)
    {
        // Skip M nodes
        for (count = 1; count<M && current!= NULL; count++)
            current = current->link;
  
        // If we reached end of list, then return
        if (current == NULL)
            return;
  
        // Start from link node and remove N nodes
        t = current->link;
        for (count = 1; count<=N && t!= NULL; count++)
        {
            node *temp = t;
            t = t->link;
            delete temp;
        }
        current->link = t;
  
        // Set current pointer for link iteration
        current = t;
    }
}

