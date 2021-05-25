#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<MMsystem.h>
//void push(var1);
void songplay()
{
    printf("  Enter which song  you want to play ...\n 1. iphone  \n 2. krushana \n 3.  Fav Song  \n 4. Scam 1992\n ");
       printf("\n");
        int m;

        scanf("%d",&m);
        switch(m)
        {
        case 1 :;
        char   var1[]= "iphone";
        PlaySound(TEXT("G:\\music\\iphone"),NULL,SND_SYNC );
        sleep(5);
        printf("enter the song in recently played song ....\n");
        //char var1[10]= 'iphone';
        push(var1);
        break ;



        case 2:;
        char var2[] ="krushna";
        PlaySound(TEXT("G:\\music\\1"),NULL,SND_SYNC );
        sleep(10);
        printf("enter the song in recently played song ....\n");
        push(var2);
        break;


        case 3:;
        char var3[]="fav";
        PlaySound(TEXT("G:\\music\\fav"),NULL,SND_SYNC );
        sleep(10);
        printf("enter the song in recently played song ....\n");
        push(var3);
        break;


         case 4:;
        char var4[]="Scam_1992";
        PlaySound(TEXT("G:\\music\\Scam"),NULL,SND_SYNC );
        sleep(10);
        printf("enter the song in recently played song ....\n");
        push(var4);
        break;
        }


}


struct node
{
char  val[100];
struct node *link;
};
struct node *start;
void push(char var1[])
{
    char val[100];
    strcpy(val , var1);
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        //printf("Enter the value");
       // fflush(stdin);

       //gets(val);
        //gets(val);
        if(start==NULL)
        {
            //ptr->val = val;
            strcpy(ptr->val , val);
            ptr -> link = NULL;
            start=ptr;
        }
        else
        {
          // ptr->val = val;
           strcpy(ptr->val , val);
           ptr->link = start;
            start=ptr;

        }
        printf("Item pushed");

    }
}


void  Rec( struct node *start)
 {
     while(start!=NULL){
   char  item[100];
    struct node *ptr;
    if (start == NULL)
    {
        printf("Underflow");
    }
    else
    {
       strcpy (item , start->val);
        ptr = start;
        start = start->link;
        free(ptr);
        puts(item);
        //printf("Item popped");

    }
     }

 }


struct Node
{
    char data[100];
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    struct Node *temp = ptr;
    printf("Songs avaliable are ::\n");
    while (temp != NULL)
    {
        printf("%s->",temp->data);
        //printf("\n");
        temp = temp->next;
    }
}

int  insertIntoLinkedList(struct Node * head2)
{
    char word2[100];
    printf("Enter song to add::\n");
    fflush(stdin);
    gets(word2);
    printf("Enter the 1 for adding song at beginning of list \n"
            "Enter the 2 for adding song at mid of list \n"
           "Enter the 3 for adding song at end of list \n   ");
           printf("\n");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
{
     struct Node *newNode = malloc(sizeof(struct Node));
     strcpy(newNode->data, word2);
      newNode->next =head2;
      head2=newNode;
 return (head2);

}
else if(choice==2)
{
    struct Node *counter=head2;
    int position ;
    printf("Enter the position of song");
  fflush(stdin);
    scanf("%d",&position);
    while(position!=0)
    {
        counter=counter->next;
        position--;

    }
    struct Node *newNode = malloc(sizeof(struct Node));
    strcpy(newNode->data, word2);
    newNode->next=counter->next;
    counter->next=newNode;
    free(counter);
     return (head2);
}
else if (choice==3){

     struct Node *counter=head2;
      struct Node *temp=0;
    while (counter!=0)
    {
        temp=counter;
        counter=counter->next;
    }
    struct Node *newNode = malloc(sizeof(struct Node));
    strcpy(newNode->data, word2);
    temp->next=newNode;
    newNode->next=0;
    free(counter);
     return (head2);
}

 }

void deleteFromLinkedList( struct Node* head3){

   struct Node* tempNode = NULL;

   struct Node* previous = NULL;

   struct Node* current = head3;
    char word3[100];
    printf("Entter song to delete");
    fflush(stdin);
    gets(word3);

   if(NULL == current){
      printf("Cannot delete from empty list!\n");
      return;
   }


   if(0 == strcmp(word3, current->data)){

      tempNode = current;

      head3 = current->next;

      printf("deleting \"%s\" . . .\n", tempNode->data);
      free(tempNode);
   }
   else{

      while(NULL != current && 0 != strcmp(word3, current->data)){
        previous = current;
         current = current->next;
      }
      if(NULL != current){

         tempNode = current;

         previous->next = current->next;

         printf("deleting \"%s\" . . .\n", tempNode->data);
         free(tempNode);
      }
   }
}

void totalsong(struct Node *ptr){
    int c=0;
    while (ptr != NULL)
    {
        c++;
        ptr = ptr->next;
    }
    printf("total songs are :: %d \n",c);

}

void search(struct Node * head)
{

    struct Node *p = head;
   // struct Node *q = head->next;

    fflush(stdin);
    char word3[100];
    printf("--Entter song to search--\n");
    gets(word3);
    int counter =1;
    while ( strcmp( p->data ,word3)!=0 && p->next!=0)
    {
        counter++;
        p=p->next;
         if(p==0) {printf(" NOT FOUND ");}
    }
if(strcmp(p->data, word3)==0) {printf("Found at %d",counter);}

}

void play(struct Node * ptr)
{
    //int i=1,j;
    //printf("Enter 1 to play songs --\n");
    //scanf("%d",&j);
   // if (j=1)
    {
      //  while (ptr != NULL && i!=0)
        //{
          //  if(i)
           // {
         //   printf("Now Playing:");
            songplay();
        //    ptr = ptr->next;
      //      }
        //    printf("Enter '1' to play next song in the playlist\n'0' to stop playing songs\n");
      //      scanf("%d",&i);
        }
    }



void SORTSONG(struct Node *temp)
{
    int i=0;
struct Node * uft = temp;
    while(uft!=0){
        i++;
        uft=uft->next;
    }

    char flag[10];
	struct Node *ptr;
	//char temp[10];
	int k,j;

	for(k=0;k<i-1;k++)
	{
		ptr=temp;
		for(j=0;j<i-1;j++)
		{
			if(strcmpi(ptr->data,ptr->next->data)>0)
			{

				strcpy(flag ,ptr->data);
				strcpy(ptr->data,ptr->next->data);
				strcpy(ptr->next->data,flag);

			}
			ptr=ptr->next;

		}

	}
	printf("\n");
}


void main()
{
    int choice;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    char a1[100]="iphone";
    char a2[100]="bitboxing";
    char a3[100]="krushna";
    //char a4[100]="sample4";
    //char a5[100]="sample5";


    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));


    strcpy(head->data,a1);
    head->next = second;

    strcpy(second->data,a2);
    second->next = third;

    strcpy(third->data,a3);
    third->next = NULL;

    //strcpy(fourth->data,a4);
    //fourth->next = NULL;

    printf("    .....................................................\n");
    printf("       HARSH FULZELE , ID : 19005049 , PRACTICAL NO : 4\n");
    printf("    .....................................................\n");
do{

 printf("\n");
 //printf("\n");

    printf("            ===============================\n");
    printf("            ||--Available options are--  ||\n");
	printf("            ||  1.ADD New Song           ||\n");
	printf("            ||  2.Delete song            ||\n");
	printf("            ||  3.Display Playlist       ||\n");
	printf("            ||  4.search for song        ||\n");
	printf("            ||  5.play  song             ||\n");
	printf("            ||  6.Total song             ||\n");
	printf("            ||  7.Sort playlist          ||\n");
	printf("            ||  8.recently played song   ||\n");
	printf("            ||  9.Exit                   ||\n");
    printf("            ============================== \n");
    printf("            ...............................\n");
    printf("            ******Enter YouR chice*******\n");
    printf("            ...............................\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1 :;
            //struct Node *newhead2 ;
         int *x=   insertIntoLinkedList(head);
            linkedListTraversal(x);
            printf("\n");
            printf("\n------------------------------XXXXXXXXXX----------------------------------------\n");
            break;
        case 2 :
        	deleteFromLinkedList(head);
        	linkedListTraversal(head);
        	printf("\n");
            printf("------------------------------XXXXXXXXXX----------------------------------------\n");
            break;
            case 3 :
                linkedListTraversal(head);
                printf("\n");
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;
            case 6 :
                totalsong(head);
               // linkedListTraversal(head);
                printf("\n");
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;

            case 4 :
                search(head);
                printf("\n");
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;
            case 5 :
                play(head);
                printf("\n");  // linkedListTraversal(head);
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;
            case 7 :
                 SORTSONG(x);
                 linkedListTraversal(x);
                 printf("\n");
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;

            case 8 :
                 Rec(start);
                 //linkedListTraversal(x);
                 printf("\n");
                printf("------------------------------XXXXXXXXXX----------------------------------------\n");
                break;
            case 9:
                exit(0);
                break;

            default:
                printf("Enter choice proper\n");
                break;
        }

        }while(choice!=9);

}
