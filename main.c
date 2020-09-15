#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"

void testIntStack() {
    Stack stack = {NULL};
    print(&stack);
    push(&stack, 3);
    print(&stack);
    // /*
    push(&stack, 4);
    print(&stack);
    push(&stack, 5);
    print(&stack);
    pop(&stack);
    print(&stack);
    printf("%d\n", peek(&stack));
}

void testCharStack() {
    Stack stack = {NULL};
    print(&stack);
    push(&stack, 3 + 'a');
    print(&stack);
    // /*
    push(&stack, 4 + 'a');
    print(&stack);
    push(&stack, 5 + 'a');
    print(&stack);
    pop(&stack);
    print(&stack);
    printf("%c\n", peek(&stack));
}

int main() {
    testCharStack();
    // testIntStack();
    return 0;
}