#include <stdlib.h>
#include <stdio.h>

#include "stack.h"

int main() {
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
    // */
    return 0;
}