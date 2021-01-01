#include<bits/stdc++.h>
using namespace std;



class Node {
    public :
        int data;
        Node *next;
    };


void append (Node ** head_ref, int new_data)
{
    Node * new_node = new  Node();
    Node * last = * head_ref;
    new_node->data= new_data;
    new_node->next= NULL;
    if (*head_ref==NULL)
    {
        *head_ref= new_node;
        return;
    }
    while (last ->next=NULL)
        last =last->next;


     last->next= new_node;
    return;

}
void printlist( Node * node)
{

    while ( node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
void push(Node ** head_ref, int new_data)
{
    Node * new_node= new Node();
    new_node->data= new_data;
    new_node->next= (*head_ref);
    (*head_ref)= new_node;
}
 int main()
 {
     Node * head =NULL;
     append(& head ,6);
     push(&head,7);
      push(&head,1);
      append(& head ,4);
        printlist(head);

     printlist(head);

 }
