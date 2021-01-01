#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
        Node * prev;

};
void deletelist (Node **head_ref ,Node *del)
{
    if(head_ref==NULL|| del == NULL)
        return;
    if(*head_ref== del)
        *head_ref= del->next;
    if (del ->next !=NULL)
            del->next->prev= del->next;
    if (del->prev != NULL)
        del->next->prev =del->next;



    free(del);
    return;
}
void push ( Node **head_ref, int new_data)
{
    Node * new_node = new Node ();
    new_node ->data= new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((* head_ref)!= NULL)
        (* head_ref) ->prev = new_node ;

    (* head_ref) = new_node;
}
void append(Node **head_ref, int new_data)
{
    Node * new_node = new Node ();
    Node * last = * head_ref;
    new_node->data = new_data;
    new_node->next= NULL;
    if ( * head_ref == NULL)
    {

        new_node->prev = NULL;
        * head_ref = new_node;
        return ;
    }
    while( last->next != NULL)
        last =last->next;


    last->next = new_node;
    new_node->prev = last ;
     return ;
}
void print(Node * node )
{
    Node * last ;
    /*while(node !=NULL)
    {
        cout<<" "<<node->data;
        last = node ;
        node = node->next;
    }*/
    while (last!=NULL)
    {
        cout << " "<<last->data<< " ";
        last= last->prev;
    }
}
int main()
{
    Node * head = NULL;

    push(& head ,1);
     push(& head , 2);
     push(& head , 3);
      push(& head , 4);
       print(head);
       cout<< "deleting list ";
       deletelist (&head , head);
       deletelist(&head , head->next);
       deletelist(&head , head->next);
       print(head);

}
