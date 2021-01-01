#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


class Node
{
public :
    int data;
    Node * next;
};
void createlist( Node ** head_ref, int new_data)
{
    Node * new_node = new Node ();
    new_node->data= new_data;
    new_node->next =( * head_ref);
    (* head_ref )= new_node;
}
int  printlist (Node * node )
{
    int flag =0;
    while( node != NULL)
    {
        flag++;
        cout <<node->data<<" ";
        node= node->next;
    }
    return flag;

}
int main()
{
    Node * head = NULL;
    createlist ( &head ,1);
    createlist ( &head ,2);
    cout<<endl<<printlist(head);
    return 0;


}
