#include <stdio.h>
#include <stdlib.h>

// define a linked list node structure
struct Node {
    int data;
    struct Node *next;
};

// function to insert a node at the beginning of the list
void insertAtBeginning(struct Node **head_ref, int new_data) {
    // allocate memory for new node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // set data and next pointer of new node
    new_node->data = new_data;
    new_node->next = *head_ref;

    // update head pointer
    *head_ref = new_node;
}

// function to print the linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    // insert nodes at beginning of list
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);

    // print the linked list
    printf("Linked list: ");
    printList(head);

    return 0;
}