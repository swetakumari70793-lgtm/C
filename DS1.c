#include <stdio.h>
#include <stdlib.h> // Required for exit()

#define MAX_SIZE 5 // Define the maximum capacity of the stack

int stack[MAX_SIZE]; // Array to store stack elements
int top = -1;        // Index of the top element, initialized to -1 for an empty stack

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow: Cannot push %d, stack is full.\n", value);
    } else {
        stack[++top] = value; // Increment top and add the value
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop, stack is empty.\n");
        return -1; // Return a sentinel value indicating failure
    } else {
        int popped_value = stack[top--]; // Get the top element and decrement top
        printf("Popped %d from the stack.\n", popped_value);
        return popped_value;
    }
}

// Function to traverse and display elements of the stack
void traverse() {
    if (isEmpty()) 
    {
        printf("Stack is empty, no elements to display.\n");
    } 
    else
     {
        printf("Elements in the stack (from top to bottom):\n");
        for (int i = top; i >= 0; i--) 
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse (Display)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}