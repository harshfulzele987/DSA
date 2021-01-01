#include <stdio.h>    //ID:- 19005062
#include <conio.h>    //NAME:-AMEY MANOJ DHOLE
#include <stdlib.h>   //DS PROGRAM NO:-4 (Music PLayer using Linked List)
#include <string.h>
#include <Windows.h>
#include <MMsystem.h>


void Play1()
{
	PlaySound(TEXT("Taq.wav"),NULL,SND_ASYNC);
}

void Play2()
{
	PlaySound(TEXT("Manjha.wav"),NULL,SND_ASYNC);
}

void Play3()
{
	PlaySound(TEXT("Pyaar.wav"),NULL,SND_ASYNC);
}

void Play4()
{
	PlaySound(TEXT("Dil.wav"),NULL,SND_ASYNC);
}

void Play5()
{
	PlaySound(TEXT("Jannawale.wav"),NULL,SND_ASYNC);
}

struct node
{
	char data[10];
	struct node *link;

};
struct node *root = NULL;
int DISPLAY(void)
{
	int i=0;
	struct node*ptr;
	ptr=root;
	while(ptr!=NULL)
	{
		i=i+1;
		ptr=ptr->link;
	}
	return i;
}

void ADDSONG(void)
{
	int option;
    printf("ENTER UR DESIRABLE CHOICE FOR INSERTION!\n 1.INSERTING BEFORE 1st SONG.\n 2.INSERTING SONG IN BETWEEN.\n 3.INSERTING SONG AT LAST\n");
    scanf("%d",&option);
    printf("\n");
   if(option==1)
   {

	struct node *temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA!\n");
	scanf("%s",temp1->data);
	temp1->link=root;
	root=temp1;
   }
   else if(option==2)
   {
		char song[10];
		struct node *ptr;
		ptr=root;
		struct node *temp1;
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("ENTER THE DATA!\n");
		scanf("%s",temp1->data);
		printf("ENTER THE SONG AFTER WHICH THE NEW SONG HAS TO BE INSERTED!\n");
		scanf("%s",song);
		while(strcmpi(ptr->data,song)!=0)
		{

			ptr = ptr->link;

		}
		temp1->link=ptr->link;
		ptr->link=temp1;
		printf("\n");
   }
   else if(option==3)
   {
		struct node *ptr,*y;
		struct node *temp1;
		temp1=(struct node*)malloc(sizeof(struct node));
		printf("ENTER THE DATA!\n");
		scanf("%s",temp1->data);
		ptr=root;
		while(ptr!=NULL)
		{
			y=ptr;
			ptr=ptr->link;
		}
		y->link=temp1;
	temp1->link=NULL;
	printf("\n");
  }
  else
  {
	printf("INVALID OPTION!");
  }

}
void DELETESONG()
{
    int option;
    printf("ENTER UR DESIRABLE CHOICE FOR DELETION!\n 1.DELETING 1st SONG.\n 2.DELETING ANY SONG IN THE LIST.\n");
    scanf("%d",&option);
    printf("\n");
	if(option==1)
	{
		if(root==NULL)
		{
			printf("UNDERFLOW LIST..\n");
		}
		else
		{
			struct node *ptr,*y;
			ptr=root;
			root=ptr->link;
			ptr->link=NULL;
			free(ptr);
		}
	}
	else if(option==2)
	{
		char song[10];
		struct node *ptr,*y;
		ptr=root;
		printf("ENTER THE DATA.\n");
		scanf("%s",song);
		while(strcmpi(ptr->data,song)!=0)
		{
			y=ptr;
			ptr = ptr->link;

		}
		y->link=ptr->link;
		free(ptr);
		printf("\n");
	}
	else
	{
		printf("INVALID OPTION !");
	}



}
void DISPLAYSONG(void)
{
   struct node*ptr;
   ptr=root;
  while(ptr!=NULL)
  {

	printf("%s->",ptr->data);
	ptr=ptr->link;
  }
  printf("\n");

}
void TOTALSONG(void)
{
		int i=0;
		struct node*ptr;
		ptr=root;
		while(ptr!=NULL)
		{
			i=i+1;
			ptr=ptr->link;
		}
		printf("TOTAL SONGS ARE:-%d",i);
		printf("\n");
}
void SEARCHSONG(void)
{
	char song[10];
	int i=0;
	struct node *ptr;
	ptr=root;
	printf("ENTER THE DATA TO BE SEARCHED.\n");
	scanf("%s",song);
	while(strcmpi(ptr->data,song)!=0&&ptr!=NULL)
	{
		i=i+1;
		ptr=ptr->link;
		if(ptr==NULL)
		{
			printf("NO SONG FOUND\n");

		}

	}
	if(strcmpi(ptr->data,song)==0)
	{
		printf("SONG FOUND AT LOCATION:- %d",i+1);
	}

	printf("\n");

}
void PLAYSONG()
{
	struct node *ptr;
	ptr=root;

	while(ptr!=NULL)
	{

		if(strcmpi(ptr->data,"Taqdeer")==0)
		{
			Play1();
			Sleep(25000);
		}
		else if(strcmpi(ptr->data,"Manjha")==0)
		{
			Play2();
			Sleep(25000);
		}
		else if(strcmpi(ptr->data,"Pyaar")==0)
		{
			Play3();
			Sleep(25000);
		}
		else if(strcmpi(ptr->data,"Dil")==0)
		{
			Play4();
			Sleep(25000);
		}
		else if(strcmpi(ptr->data,"Jannawale")==0)
		{
			Play5();
			Sleep(25000);
		}
		else
		{
			printf("NO SONG IN PLAYLIST\n");
		}
		ptr=ptr->link;
	}

}
void SORTSONG()
{
	int N=DISPLAY();

	struct node *ptr;
	char temp[10];
	int k,j;

	for(k=0;k<N-1;k++)
	{
		ptr=root;
		for(j=0;j<N-1;j++)
		{
			if(strcmpi(ptr->data,ptr->link->data)>0)
			{

				strcpy(temp,ptr->data);
				strcpy(ptr->data,ptr->link->data);
				strcpy(ptr->link->data,temp);

			}
			ptr=ptr->link;

		}

	}
	printf("\n");

}

int main()
{
	int n,i;
	struct node *temp;
	struct node *ptr;
	printf("Enter the number of nodes in linked list:-\n");
	scanf("%d",&n);
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
			temp->link=NULL;

		}

	}
	//Display
	ptr=root;
	while(ptr!=NULL)
	{

		printf("%s->",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
	while(1)
	{
		int choice;
		printf(" ENTER UR CHOICE FOR PERFORMING THE FOLLOWING OPERATION'S:- \n\n 1.ADD NEW SONG.\n 2.DELETE ANY SONG.\n 3.DISPLAY ALL THE SONGS.\n 4.TOTAL NUMBER OF SONGS.\n 		5.SEARCH A SONG.\n 6.PLAY SONGS.\n 7.SORTING THE LIST.\n 8.EXIT.\n");
		scanf("%d",&choice);
		if(choice==1)
		{//ADD SONG 3 TYPES
			ADDSONG();
		}
		else if(choice==2)
		{//DELETE SONG 2 TYPES
			DELETESONG();
		}
		else if(choice==3)
		{  //DISPLAY.
		    DISPLAYSONG();
		}
		else if(choice==4)
		{ //TOTAL
			TOTALSONG();
		}
		else if(choice==5)
		{ //SEARCHING OF SONG.
		    SEARCHSONG();
		}
	    else if(choice==6)
		{//PLAYING SONGS
			PLAYSONG();
		}
		else if(choice==7)
		{//SORTSONG
			SORTSONG();
		}
		else if(choice==8)
		{//EXIT..
			exit(1);
		}

	}
       getch();
       return 0;
}
