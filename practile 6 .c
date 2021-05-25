#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>


typedef struct edgelist
{
    char flight[50];
    struct edgelist * link;
}se;


typedef struct Node
{
    char city[50];
    struct edgelist *d;
    struct Node *NEXT;
}sn;


typedef struct queue
{
    char data[50];
    struct queue * next;
}queue;


sn  * head=NULL;
queue * Front=NULL;
queue * Rear=NULL;


sn * Add_flight(char s[],char d1[]);
sn * Add_city(char s[]);
sn * Delete_city(char str[]);
se * Delete_flight(se * start,char dest[]);
sn * Find(sn * Start,char str[]);
se * Find_flight(char s[],char d[]);
int Find_route(char s[],char dest[]);
int Sizeofque(queue *start);


int main()
{
    int home_page_options,exit_option=0,c7;
    char c1_new_city[50],c2_city[50],c3_city[50],c3_new_flight[50],c4_city[50],c4_flight[50],c5_city1[50],c5_city2[50],c6_city1[50],c6_city2[50],c7_city1[50],c7_city2[50];
    sn * c3=NULL;
    sn * c4=NULL;
    se * c5=NULL;


   head=Add_city("Amravati");
   head=Add_city("Nagpur");
   head=Add_city("tiosa");
   head=Add_city("goa");


   head=Add_flight("Amravati","Nagpur");
   head=Add_flight("Amravati","tiosa");
   head=Add_flight("Amravati","goa");
   head=Add_flight("Nagpur","Amravati");
   head=Add_flight("Nagpur","goa");
   head=Add_flight("Nagpur","tiosa");
   head=Add_flight("tiosa","Amravati");
   head=Add_flight("tiosa","goa");
   head=Add_flight("tiosa","Nagpur");
   head=Add_flight("goa","Amravati");
   head=Add_flight("goa","Nagpur");






    sn *ptr;
    ptr=head;




    do
    {


        system("cls");
        printf(" 1.add city\n 2. remove city\n 3. add flight\n 4. remove flight.\n 5.check for direct flight\n 6.check rute\n 7.check for stops\n 8.display\n 9.exit\n");
        scanf("%d",&home_page_options);
        switch(home_page_options)
        {


        case 1:
            getchar();
            printf("\nEnter the new city you want to add\n");
            gets(c1_new_city);
            head=Add_city(c1_new_city);
            printf("\n%s is successfully added in the system",c1_new_city);
            getchar();
            getchar();
            break;




        case 2:
            getchar();
            Display_system(head);
            printf("\nEnter the city you want to delete\n");
            gets(c2_city);
            head=Delete_city(c2_city);
            printf("\n%s is successfully removed\n",c2_city);
            getchar();
            getchar();
            break;




        case 3:
            getchar();
            Display_system(head);
            printf("\nEnter the city where you want to add flight\n");
            gets(c3_city);
            c3=Find(head,c3_city);
            printf("\nEnter the new flight\n");
            gets(c3_new_flight);
            head=Add_flight(c3_city,c3_new_flight);
            printf("\nFlight from %s to %s is successfully added in the system ",c3_city,c3_new_flight);
            getchar();
            getchar();
            break;




        case 4:
            getchar();
            Display_system(head);
            printf("\nEnter the city of which you want to delete flight\n");
            gets(c4_city);
            c4=Find(head,c4_city);
            printf("\nEnter the flight to delete it\n");
            gets(c4_flight);
            c4->d=Delete_flight(c4->d,c4_flight);
            printf("\nThis flight is successfully removed from the system");
            getchar();
            getchar();
            break;




        case 5:
            getchar();
            printf("\nEnter City 1 :\n");
            gets(c5_city1);


            printf("\nEnter City 2 :\n");
            gets(c5_city2);
            c5=Find_flight(c5_city1,c5_city2);
            if(c5==NULL)
            {
                printf("There is no direct flight from %s to %s",c5_city1,c5_city2);
            }
            else
            {


                printf("There is a direct flight present from %s to %s",c5_city1,c5_city2);
            }


            getchar();
            getchar();
            break;




        case 6:
            getchar();
            printf("\nEnter the city 1 :\n");
            gets(c6_city1);
            getchar();
            printf("\nEnter the city 2 :\n");
            gets(c6_city2);
            Find_route(c6_city1,c6_city2);
            getchar();
            getchar();
            break;




        case 7:
            getchar();
            printf("\nEnter the city 1 :\n");
            gets(c7_city1);
            getchar();
            printf("\nEnter the city 2 :\n");
            gets(c7_city2);
            c7=Find_route(c7_city1,c7_city2);
            if(c7==0)
            {
                printf("\nThere is no stop between %s to %s\n",c7_city1,c7_city2);
            }
            else
            {
                printf("\nThere are %d stops between %s to %s\n",c7,c7_city1,c7_city2);
            }


            getchar();
            getchar();
            break;




        case 8:
            system("cls");
            Display_system(head);
            getchar();
            getchar();
            break;




        case 9:
            exit_option=1;
            getchar();
            getchar();
            system("cls");


            break;


        default :
            printf("\n\t\tInvalid Option\n");


        }
    }
    while(exit_option==0);


    printf("\n\t\tThank You !\n\t\tVisit Again..");
    return 0;
}


sn * Add_flight(char s[],char d1[])
{


      sn * temp;
      sn * ptr;
      se * Dest;
      se * p;
      temp =head;


      while(temp!=NULL)
      {
          if(strcmp(temp->city,s)==0)
          {




              Dest=(se *)malloc(sizeof(se));


              strcpy(Dest->flight,d1);


              Dest->link=NULL;


              if(temp->d==NULL)
              {
                 temp->d=Dest;
                 p=Dest;
              }
              else
              {
                  p=temp->d;
                  while(p->link!=NULL)
                  {
                      p=p->link;
                  }
                  p->link=Dest;
              }
          }
          temp=temp->NEXT;
      }
      return head;
}


sn * Add_city(char s[])
{
    sn * p;
    sn * temp;


    temp=(sn *)malloc(sizeof(sn));
    strcpy(temp->city,s);
    temp->NEXT=NULL;
    temp->d=NULL;


    if(head==NULL)
    {


        head=temp;




    }
    else
    {
        p=head;
        while(p->NEXT!=NULL)
        {
            p=p->NEXT;
        }
        p->NEXT=temp;
    }
    return head;
}


sn * Find(sn * Start,char str[])
{
    sn * ptr;
     ptr=Start;
    while(ptr!=NULL)
    {
        if(strcmpi(ptr->city,str)==0)
        {
            return ptr;
        }
        ptr=ptr->NEXT;
    }
    return NULL;
}


se * Find_flight(char s[],char d[])
{
    sn * ptr=Find(head,s);


    while(ptr->d!=NULL)
    {
        if(strcmpi(ptr->d->flight,d)==0)
        {
            return ptr->d;
        }
        ptr->d=ptr->d->link;
    }
    return NULL;
}


se * Delete_flight(se * start,char dest[])
{
    se * temp=start;
     se * ptr=temp;
     se *p=temp;
     if(temp==NULL)
     {
         return temp;
     }
    if(strcmpi(temp->flight,dest)==0)
    {
        temp=temp->link;
        return temp;
    }




        temp=temp->link;
        while(temp!=NULL)
        {
            if(strcmpi(temp->flight,dest)==0)
            {
                ptr->link=temp->link;
            }
            ptr=temp;
            temp=temp->link;
        }
    return p;
}


sn * Delete_city(char str[])
{
    sn * temp=head;
    sn * ptr=head;
    sn * Save;
    se * p;


    while(temp!=NULL)
    {
        p=temp->d;
        temp->d=Delete_flight(p,str);
        temp=temp->NEXT;
    }


    if(strcmpi(ptr->city,str)==0)
    {
        ptr=ptr->NEXT;
        head = ptr;
        return head;
    }




        Save=ptr;
        ptr=ptr->NEXT;


        while(ptr!=NULL)
        {
            if(strcmpi(ptr->city,str)==0)
            {
                Save->NEXT=ptr->NEXT;
            }
            Save=ptr;
            ptr=ptr->NEXT;
        }


    return head;
}


void Display_system(sn * start)
{
    sn * ptr;
    se * p=NULL;
    ptr=start;
    printf("\n%s\t%s","Cities","Available Flights");
    while(ptr!=NULL)
    {


        p=ptr->d;
        printf("\n%s\t",ptr->city);
        while(p!=NULL)
        {
            printf("%s\n\t%s",p->flight," ");
            p=p->link;
        }


        //printf("\n");
        ptr=ptr->NEXT;
    }
}


void insert(char str[])
{
    queue * temp;
    temp=(queue *)malloc(sizeof(temp));
    strcpy(temp->data,str);
    temp->next=NULL;


    if(Front==NULL)
    {
        Front=temp;
        Rear=temp;
    }
    else
    {
        Rear->next=temp;
        Rear=temp;
    }


}


void Delete()
{
    Front=Front->next;


}


int Sizeofque(queue *start)
{
   queue * temp=start;
   int n=0;


   while(temp!=NULL)
   {
       n++;
       temp=temp->next;
   }
}
int Find_route(char s[],char dest[])
{
    sn* temp=Find(head,s);


    if(Find_flight(s,dest)!=NULL)
    {
        printf("\n\n\t\tRoute :\n\t\t%s - %s",temp->city,Find_flight(s,dest)->flight);
        return 0;
    }




    if(temp->d!=NULL)
    {
        Find_route(temp->d->flight,dest);
        insert(s);
    }
    if(temp==NULL)
    {
        Find_route(temp->city,dest);
        Delete();
    }




    return Sizeofque(Front);
}
