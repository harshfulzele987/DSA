#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

class EBill

     {
       private:
        char name[100];

        protected:
        float acc;
       public:
        void input()
             {
              delay(100);
              cout<<"\nEnter ur name::"; gets(name);
              delay(100);
              cout<<"\nEnter ur account no::"; cin>>acc;
             }
        void display()
             {
             cout<<"\nUr name is::"<<name;
             cout<<"\nUr acc_no is::"<<acc;
             }

     };

class poor: public EBill
{
       private:
          float unit;
       public:
        void amountp()
         {     input();
          cout<<"\nEnter the amount of electricity::";
          cin>>unit;
         }
        void displayp()
         {
         clrscr();
         display();
        float k=(unit*4);
        float l=(float)15/100 ;
        float n=(float)k*l;
        float h=(k-n);
        cout<<"\nTotal bill in taka is::"<<h;
         }
         int searchp(int a)
         {
        if(a==acc)
         {
         displayp();
         return 1;
         }
         else return 0;
         }
};
class mid: public EBill
{
       private:
          float unit;
       public:
        void amountm()
         {
          input();
          cout<<"\nEnter the amount of electricity::";
          cin>>unit;
         }
        void displaym()
         {      display();
        float k=(unit*4);
        float l=(float)5/100 ;
        float n=(float)k*l;
        float h=(k-n);

        cout<<"\nTotal bill in taka is::"<<h;
         }
           int searchm(float b)
         {
        if(b==acc)
         {
         displaym();
         return 1;
         }
         else
         return 0;
         }
};

         class rich: public EBill
{
       private:
          float unit;
       public:
        void amountr()
         {    input();
          cout<<"\nEnter the amount of electricity::";
          cin>>unit;
         }
        void displayr()
         {      display();
        float k=(unit*4);
        cout<<"\nTotal bill in taka is::"<<k;
         }
           int searchr(float c)
         {
        if(c==acc)
         {
         displayr();
         return 1;
         }
         else return 0;
         }
};


        void main()

{
        textcolor(4);
        textbackground(6);
         highvideo();
         float ac;
         int i,n,j,k,l,a;
        poor p[20];
        mid m[20];
        rich r[20];
        clrscr();

    while(1)
    {

        clrscr();
        delay(1000);

        cout<<"\nTHE PROJECT OF ELECTRIC BILL\n****************************";
        cout<<"\n\n\n1)input\n2)display\n3)search\n4)exit: "<<endl<<endl;

        delay(2000);
        char c[10];
        cout<<"Enter choice: ";
        cin>>n;
               switch(n)
               {
              case 1:
             clrscr();
             cout<<"\nHow many input do u want ? \n";

              cin>>j;

              for(i=0;i<j;i++)
             {
           cout<<"\nGive p for poor,r for rich,m for mid class";
                cin>>c[i];

                 if(c[i]=='p')
             p[i].amountp();

                 if(c[i]=='m')
              m[i].amountm();

                 if(c[i]=='r')
              r[i].amountr();
             }
              break;

              case 2:
              clrscr();
            for(i=0;i<j;i++)
             {

                if(c[i]=='p')
              p[i].displayp();
                if(c[i]=='m')
              m[i].displaym();
                if(c[i]=='r')
              r[i].displayr();
             }
                getch();
              break;

              case 3:
                  cout<<"\nGive account no ";
                  cin>>ac;
                   clrscr();
                  for(i=0;i<j;i++)
                   {
                  if(c[i]=='p')
                   {
                   p[i].searchp(ac);
                    if(a==1)
                    break;
                   }
                  if(c[i]=='m')
                   {
                   m[i].searchm(ac);
                    if(a==1)
                    break;
                   }
                  if(c[i]=='r')
                   {
                    r[i].searchr(ac);
                    if(a==1)
                    break;
                   }
                   }
                   getch();
              break;

              case 4:
              break;

              default:
              cout<<"\nInvalid option\n";
              break;
               }
           if(n==4)
           break;
        }
        getch();
}
