typedef struct Stack Stack;
typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;
};

void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
int isFull(Stack* stack);
void print(Stack* stack);