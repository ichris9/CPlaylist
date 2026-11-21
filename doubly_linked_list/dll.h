#include <stdio.h>
#include <stdlib.h>

//defining a node
typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

//function to create a new node with givin value as value
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

//function to insert a node at the beginning
void insertAtBeginning(Node** head, int data){
    //creating a new node
    Node* newNode = createNode(data);

    //checking if DLL is empty
    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode -> next = *head;
    (*head) -> prev = newNode;
    *head = newNode;

}