#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Node
{
   public:
       int data;
       Node * next;
};
 void push(Node **head_ref , int new_data )
{
    Node * new_node = new Node();
    new_node->data= new_data;
    new_node->next=(*head_ref);
    (*head_ref)  = new_node;

}
void printlist(Node* node )
{
    while( node != NULL)
    {
    cout<<node->data;
    node = node->next;
    }
}
void deletenode( **head_ref, int position)
{

    if(head_ref== NULL)
        return;
    Node * temp = * head_ref;

}

int main()
{
        Node * head= NULL;
        push( &head,1);
         push( &head,2);
          push( &head,3);
           push( &head,4);

        printlist(head);

}
