#include <stdio.h>
#include <stdbool.h> 
#define MAX_SIZE 100

//defining a struct for the stack
typedef(){
    arr[MAX_SIZE];
    int top;
}Stack

//initializing the stack without top (-1)
void stack_init(Stack *stack){
    stack-> top = -1;
}

//"top == -1?" this is what this function ask basically
bool isEmpty(Stack *stack){
   return stack -> top == -1;
}

//"top >= 99?" this is what this function ask basically
bool isFull (Stack *stack){
    return stack -> top >= MAX_SIZE-1;
}

//decrease the index and verify wether the stack is empty
int pop(Stack *stack){
    if(isEmpty(stack)){
        printf("stack underflow!\n");
        return -1;
    }
    int popped = stack -> arr[stack -> top];
    stack -> top--;
    return popped;
}

//increase the index and verify wether the stack is full
void push(Stack *stack, int value){

    if(isFull(stack)){
        printf("Stack Overflow \n");
        return;
    }
    stack ->arr[++stack->top] = value;
    printf("pushed %d onto the stack", value);
}

int peek(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return -1;
    }
    return stack = -> arr[stack -> top];
}