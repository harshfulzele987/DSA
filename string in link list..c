#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nlista{
    char *data;
    struct nlista *prox;
}Node;

Node * inserir(Node *, char *);

void show(Node *);


int main()
{
    char data[10];
    Node * Head = NULL;

    printf("Type a value: ");
    scanf("%s",data);
    Head = inserir(Head,data);
    printf("the element is : ");
    show(Head);
}

Node* inserir(Node *Head, char *value)
{

    Node *novoelemento;
    novoelemento = (Node *)malloc(sizeof(Node));

    //step 1. allocate memory to hold word
     novoelemento->data = malloc(strlen(value)+1);

    //step 2. copy the current word
    strcpy(novoelemento->data,value);

    Node *check;
    check = (Node *)malloc(sizeof(Node));

    if(Head == NULL){
        Head = novoelemento;
        Head->prox = NULL;
    }
    else{
        check = Head;
        while(check->prox != NULL)
            check = check->prox;

        check->prox = novoelemento;
        novoelemento->prox = NULL;
    }
  return Head;
}
void show(Node *Head)
{
    //check is of Node type using which you traverse the list and print the values
    Node *check;
    check = (Node *)malloc(sizeof(Node));
    check = Head;
    if (check == NULL){
        return;
    }

    while(check != NULL) {
        printf("%s", check->data);
        check=check->prox;
    }
    printf("\n");
}
