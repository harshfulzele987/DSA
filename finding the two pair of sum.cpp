#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct Node{
int data;
struct Node  *next,* prev;
};
void pairsum(struct Node * head , int x)
{
    struct Node * first= head;
    struct Node * secound = head ;
    //*first = head;
    //*secound = head;
    while ( secound->next !=NULL)
        secound = secound->next;
    bool found = false;
        while ( first != NULL && secound != NULL && first != secound && secound->next!= first && first != secound)
    {

        if ( first-> data + secound ->data == x)
        {
            found = true;
            cout<<"("<<first->data<<","<<secound->data<<")";
            first= first->next ;

            secound = secound->prev;
        }
        else
            {
                if ( first->data + secound->data <x)
                    first= first->next ;
                else
                    secound= secound ->prev;
            }
    }

}
void push( struct Node **head_ref ,int new_data)
{
    struct Node * temp = new Node ;
    temp -> data = new_data;
    temp->next =temp->prev=NULL;
    if(!(*head_ref))
        (*head_ref) = temp;
    else
    {
        temp->next=(*head_ref);
        (*head_ref)->prev=temp;
        (*head_ref) = temp;
    }
}
void printlist(struct Node * node )
{
    while(node!=NULL){
        cout<<node->data<<" ";
        node= node->next;
    }
}
int main()
{
struct Node * head =NULL;
push(&head , 4);
push(&head , 3);
push(&head , 2);
push(&head , 1);
//printlist(head);
pairsum(head , 5);

}
