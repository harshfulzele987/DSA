#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;



struct node
{
    int info;
    struct node * link;
};
struct node *start = NULL;
struct noode *createnode()
{
    struct node *n;
    n= (struct node *)malloc( sizeof(node));
    return (n);
}
void struct insertnode()
{
    struct node * temp;
    temp= createnode();
    cout<<"enter the number ";
    cin<<&temp->info;
    temp->link=NULL;
    if (start==NULL)
     start= temp;
     else
    {
      t= start ;
      while (t->link!=NULL)
            t=t->link;
      t->link =temp;
     }

}
void main()
{
    insertnode();
    createnode();
}
