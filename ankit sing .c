
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
char *data;
struct node *next;
};

void printing (struct node *head)
{
struct node *ptr;
ptr=head;
while(ptr!=NULL)
{
printf("[%s]\n",ptr->data);
ptr=ptr->next;
}
}

struct node *add_new(struct node *head,char *str )
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=head;
newnode->data=str;
head=newnode;
return (head);
//printing (head);
}

struct node*delete(struct node *head,char *str1)
{
struct node *ptr,*prev,*loc=NULL;
prev=head;
ptr=head->next;
if(prev==NULL)
printf("no data to be deleted");
if(strcmp(ptr->data,str1)==0 && ptr==NULL)
{head=NULL;
printf("successful delete");
goto ab;}
if(strcmp(prev->data,str1)==0)
{
head=ptr;
goto ab;
}
while(ptr!=NULL)
{
if(strcmp(ptr->data,str1)==0)
{prev->next=ptr->next;
free(ptr);
printf("successful delete\n");
goto ab;
}
prev=prev->next;
ptr=ptr->next;
}
ab:
return (head);
}


void searching(struct node *head,char *stri)
{
 struct node *ptr=head;
while(ptr!=NULL)
{
if(strcmp(ptr->data,stri)==0)
{
printf("song found");
break;
}
ptr=ptr->next;
}
}

void county(struct node *head)
{
struct node *ptr=head;
int i=0;
while(ptr!=NULL)
{
i=i+1;
ptr=ptr->next;
}
printf("total song is %d",i);

}

struct node* sorti(struct node *head)
{
struct node *tempu,*indi;
char change[100];
tempu=head;
indi=head->next;
while(tempu!=NULL)
{
while(indi!=NULL)
{
if(strcmp(tempu->data,indi->data)>0)
{
change[100]=tempu->data;
tempu->data=indi->data;
indi->data=change[100];
}
}
}
return (head);
}

int main()
{
  struct node *one,*two,*three,*head;
head=NULL;
char search_song[100];
one=(struct node*)malloc(sizeof(struct node));
two=(struct node*)malloc(sizeof(struct node));
three=(struct node*)malloc(sizeof(struct node));
head=one;

one->data="vande_matram";
two->data="Jana_gana_man";
three->data="sandeshe_aate_hai";
one->next=two;
two->next=three;
three->next=NULL;
printf("          welcome to mz player\n");
printf("we have some default songs for you\n");
printing(head);
abc:
printf("you can perform various operation on song\n");
printf("1.add new song\n");
printf("2.delete song\n");
printf("3.displaying your playlist\n");
printf("4.counting total songs\n");
printf("5.searching a given song\n");
printf("6.sorting you playlist\n");
printf("enter your choice\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter song name which you want to add");
char song_add[100];
struct node *newhead1=head;
scanf("%s",song_add);
newhead1=add_new(newhead1,song_add);
head=newhead1;
printing(newhead1);
break;
case 2:
printf("enter song name you want to delete");
char song_del[100];
scanf("%s",song_del);
struct node *newhead2=head;
newhead2=delete(newhead2,song_del);
head=newhead2;
printing(newhead2);
break;
case 3:
printf("your playlist is\n");
struct node *newhead3=head;
printing(newhead3);
break;
case 4:

county(head);
break;
case 5:

printf("enter song");
scanf("%s",search_song);
searching(head,search_song);
break;
case 6:
printf("your sorted playlist is");
head=sorti(head);
printing(head);
break;
default:
printf("invalid entry");
goto abc;
}
printf("wanna do more operation enter -1");
int tell;
scanf("%d",&tell);
if(tell==1)
goto abc;

    return 0;
}
