#include <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node* next;
};

void print_linked_list(struct node* ptr) {
    while(ptr != NULL) {        
        printf("%i\n", ptr->value);
        ptr = ptr->next;
    }
}

int main() {
    struct node head;
    head.value = -1;

    struct node* headPtr = &head;

    for (int i = 0; i < 10; i++) {
        struct node* next = malloc(sizeof(struct node));
        next->value = i;
        next->next = NULL;

        headPtr->next = next;
        headPtr = next;
    }

    print_linked_list(&head);

    struct node* current = head.next;
    struct node* temp;
    while (current != NULL) {
        temp = current->next;
        free(current);
        current = temp;
    }
}
