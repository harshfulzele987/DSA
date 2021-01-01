#include<bits/stdc++.h>
using namespace std;



//class for the link list

class Node {
    public :
        int data;
        Node *next;
    };


int main()
{
    Node * head = NULL; // creating pinter variables
    Node * second =NULL;
    Node * third =NULL;



    head = new Node();
    second = new Node();
    third = new Node();



    head ->data =1;         // insertion of data in given list
    head-> next = second ;
    second ->data=2;
    second ->next = third ;
    third ->data=3;
    third-> next = NULL;



while( head!= NULL){           // printing list
    cout <<head->data<<" ";
    head = head->next;
}



return 0;


}
