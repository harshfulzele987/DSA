#include<bits/stdc++.h>
using namespace std;



struct  node
{
    int  data;
    struct node  * next;;
};


  struct node * frount = 0;
    struct node * rare = 0;
void enqueue(int x)
 {

     struct node * newnode = (struct node *) malloc(sizeof(struct node));
     if (frount ==0 && rare == 0)
     {
        cout <<" Queue is empty";
         frount = newnode;
            newnode -> data = x ;
            rare = newnode;
            rare -> next  = newnode;
     }
      else
        {
               rare ->next= newnode;
               rare = newnode;
               rare -> next  = frount;
        }
}

void dqueue()
{
    struct node * temp;
    temp = frount ;
//    if(frount =0  && rare = 0)
   // cout << " queue is empty ";
    if ( frount == rare)
        frount = rare =0 ;
    else
    {
        frount = temp ->next ;
        free(temp);
    }

}
void display ( )
 {

     struct node * temp;
     temp = frount ;
while ( (temp -> next )! = frount )
    {
            cout << temp->data;
            temp =temp->next;
        }
 }

        int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();

}
