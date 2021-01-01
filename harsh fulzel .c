


//ID:- 19005049
//NAME:-Harsh fulzele
//DS PROGRAM NO:-4


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <MMsystem.h>

struct node* head = NULL;

struct node
{
	char data[10];
	struct node *next;

};

void push(void)
{
	int name ;
    printf("Enter the new song name ");
    scanf("%d",&name);
    printf("\n");

	struct node *temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA!\n");
	scanf("%s",temp1->data);
	temp1->next=head;
	head=temp1;
   }

void printList(struct node *head)
{
    struct node *temp = head;
    printf("\n");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}


void Play1()
{
	PlaySound(TEXT("G:\\music\\iphone"),NULL,SND_ASYNC);
}

void Play2()
{
	PlaySound(TEXT("G:\\music\\bit boxing"),NULL,SND_ASYNC);
}

void Play3()
{
	PlaySound(TEXT("G:\\music\\krushna"),NULL,SND_ASYNC);
}

int main()
{
	int n,i;
	struct node *temp;
	struct node *ptr;
	push();
	push();
	printList(head);




	/*scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		temp = (struct node*)malloc(sizeof(struct node));
		scanf("%s",temp->data);
		if(root==NULL)
		{
			root=temp;
			temp->link= NULL;
		}
		else
		{
			struct node *p,*x;
			p=root;
			while(p!=NULL)
			{
				x=p;
				p=p->link;

			}
			x->link=temp;
			temp->link=NULL;*/

		}



