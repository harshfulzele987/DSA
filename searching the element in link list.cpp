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
int  printlist (Node * node,int x ,int y)
{
    int flag =0;
      Node * current =  node;
   for ( current =0; current!=NULL; current++)
    {
        if(current== y)
            break;
        return current->data;


         if(current->data==x)
            return true ;
        flag++;
        cout <<current->data<<" ";
        current= current->next;
    }



    return flag;

}
int main()
{
    int x=3;
    Node * head = NULL;
    createlist ( &head ,4);
    createlist ( &head ,3);
    createlist ( &head ,2);
    createlist ( &head ,1);

    printlist(head,x)? cout<<endl<<"yes" : cout <<endl<<"No";

    return 0;


}
