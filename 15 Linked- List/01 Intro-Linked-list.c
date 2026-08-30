/*
Linked List:-
            --> A linked list is a data structure where elements are stored in separate memory locations and connected using pointers.

            --> Each element is called a node.


            --> A Linked list is also a collection of elements , but the elements are in not stored in a consecutive location.

            --> Linked list is a collection of the nodes in which one node is connected to another node and node consists
            of two part i.e , one is  data part and another one is the address part.

                  LINKED LIST

   HEAD
     │
     ▼
┌──────────┬──────────┐
│   10     │  next ───┼──────┐
└──────────┴──────────┘      │
          123AB                   ▼
                       ┌──────────┬──────────┐
                       │   20     │  next ───┼──────┐
                       └──────────┴──────────┘      │
                                  4457GH                  ▼
                                              ┌──────────┬──────────┐
                                              │   30     │  next ───┼──→ NULL
                                              └──────────┴──────────┘
                                                         45453T

Declaration of Linked List:-
                          --> In linked list , one is variable and second one is pointer variable .

                          --> We can declare linked list by using user-define data type called as Structure.

                          struct Node
                           {
                             int data;
                             struct Node *next;
                           };


*/
#include <stdio.h>
#include <stdlib.h>

struct  node {
    int data;
    struct node *next;
};

void main(){
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *four = NULL;
    struct node *five = NULL;
    struct node *six = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    if(head || !second || !third){

        head->data = 10;
        head->next = second;

        second->data = 20;
        second->next = third;

        third->data = 30;
        third->next = four;

        four->data = 40;
        four->next = five;

        five->data = 50;
        five->next = six;

        six->data = 60;
        six->next = NULL;
    }
    else
    {
        printf("Memory allocation failed");
    }

    //printing
    struct node *temp = head;
    while (temp != NULL){
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}