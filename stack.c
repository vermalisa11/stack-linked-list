#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"
void init(Stack* stack) {
    stack->top = -1;
}
void push(Stack* stack, stackType input) {

    if (isFull(stack)) {
        {
            printf("Stack overflow while push()");
            return;
        }
        stack->top = stack->top + 1;
        stack->data[stack->top] = input;

        //newNode->data = data;
        //newNode->next = stack->top;
        //stack->top = newNode;
    }
}
    stackType pop(Stack * stack) {
        if (isEmpty(stack)) {
            printf("Stack underflow while pop\n");
            return -1;
        }
        stackType a = stack->data[stack->top];
        stack->top = stack->top - 1;
        return a;
    }

    stackType peek(Stack * stack) {
        if (isEmpty(stack)) {
            printf("Stack underflow while pop\n");
            return -1;
        }
        stackType a = stack->data[stack->top];
        return a;
    }

    int isEmpty(Stack * stack) {
        return stack->top == -1;
    }

    int isFull(Stack * stack) {

        if (stack->top == 99) {
            return 1;
        }
        return 0;
    }

    void print(Stack * stack) {
        int current = stack->top;
        while (current != -1) {
            printf(TYPE_FMT" ", stack->data[current]);
            current--;
        }
        printf("\n");
    }
