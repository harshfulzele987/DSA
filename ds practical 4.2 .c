#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<stdlib.h>


#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>


void playsong()
{
    printf("now palying song , iphone rigtone \n");
  PlaySound(TEXT("G:\\music\\iphone"),NULL,SND_SYNC );
  Sleep(10000);
}
void  playsong1()
{
    printf("now palying song , bit boxing \n");
  PlaySound(TEXT("G:\\music\\bit boxing"),NULL,SND_SYNC );
  Sleep(25000);

}
void playsong2()
{
    printf("now palying song , krushna fluet");
  PlaySound(TEXT("G:\\music\\krushna"),NULL,SND_SYNC );
  Sleep(25000);
}

struct Node
{
  char data[10];
  struct Node *next;
};





void bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *lptr = NULL;

    /* Checking for empty list */
    if (start == NULL)
        return;

    do
    {
        swapped = 0;
        ptr1 = start;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while (swapped);
}

/* function to swap data of two nodes a and b*/
void swap(struct Node *a, struct Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

bool search(struct Node* head, int x)
{
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->data
             == x)
            return true;
        current = current->next;
    }
    return false;
}



/* Counts no. of nodes in linked list */
int getCount(struct Node* head)
{
    int count = 0;  // Initialize count
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
/*void deleteNode(struct Node **head_ref, int key)
{

    struct Node* temp = *head_ref, *prev;


    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }



    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }
        prev = temp;


    if (temp == NULL) return;


    prev->next = temp->next;

    free(temp);  // Free memory
}


*/



void deleteNode(struct Node **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct Node *next = temp->next->next;

    // Unlink the node from linked list
    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
}


struct Node *push(struct Node *head,char *str )
{
struct Node *newnode;
newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->next=head;
newnode->data=str;
head=newnode;
//printing (head);
}

/*void push(struct Node** head_ref, char new_data)
{

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));


    new_node->data  = new_data;


    new_node->next = (*head_ref);


    (*head_ref)    = new_node;
}
*/


void insertAfter(struct Node* prev_node, int new_data)
{

    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }


    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));


    new_node->data  = new_data;


    new_node->next = prev_node->next;


    prev_node->next = new_node;
}



void append(struct Node** head_ref, int new_data)
{

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;  /* used in step 5*/


    new_node->data  = new_data;



    new_node->next = NULL;


    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }


    while (last->next != NULL)
        last = last->next;


    last->next = new_node;
    return;
}


void printList(struct Node *head)
{
    struct Node *temp = head;
    printf("\n");
    while (temp!=NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }
}


int main()
{
     struct Node* head = NULL;

            push(&head, "iphone");
		    push(&head, "bit_boxing ");

		    push(&head, "krushna_fluet");
		    //push(&head, 7);
abc:
		    printf("  *******  THESE IS THE PLAYLIST OF SONG ******  \n +++ Iphone ringtone +++ \n +++  Bit boxing +++ \n +++ krushna flute \n ");
            printf("Enter the operation number which you want to execute:\n");
            printf(" 1.Add new song \n 2.delete song \n 3. Display enterd palylist.\n 4. total song .\n 5.searxh a song .\n");
            printf(" 6.play Song.\n 7.sort play list .\n");

           printList(head);

            int ch;
            printf("Enter the value of the ch");
            scanf("%d",&ch);

switch(ch)
	{
		case 1:;



       // printList(head);
                                                        //struct Node* new_head ;
            append(&head, 1);
		    append(&head, 2);

		    append(&head, 3);
		    append(&head, 4);
            printList(head);


            break;


		case 2:    ;
	//	struct  Node *head;

            deleteNode(&head, 1);
            printList(head);


                break;

		case 3:      ;
		printf("+++ Iphone ringtone +++ \n +++  Bit boxing +++ \n +++ krushna flute \n");

       // printList(head);

		break;



		case 4:  ;
		 int s=getCount(head);
		 printf("%d",s);
		 // printList(head);



		break;

		case 5:       ;
		search(head, 8)? printf("Yes") : printf("No");
		// printList(head);


		break;




		case 6:   ;
		printf(" 1.Iphone ringtone \n 2.  Bit boxing \n 3. krushna flute \n ");
		int x;
		scanf("%d",&x);
		switch(x)
		    {
		     case 1: ;
		    playsong();
		    break;
		    case 2 : ;
            playsong1();
            break ;
            case 3 : ;
            playsong2();
            break ;    //DELETE OPERATION ...
		    }
		break;

		case 7:     ;
		 bubbleSort(head);
		  printList(head);
		  break;


        default:
            {

        printf("invalid entry");
        goto abc;
        }


	}

	 printf("wanna do more operation enter -1");
        int tell;
        scanf("%d",&tell);
        if(tell==1)
        goto abc;


 	return 0;



}








































