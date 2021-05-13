//gcc -Wall ll_operations.c -o ll_operations

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head);
int push(node_t * head, int val);
int f_push(node_t ** head, int val);
int pop(node_t * head);
int f_pop(node_t ** head);
int remove_by_index(node_t ** head, int n);

int main()
{
    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }
    head->val = 1;
    head->next = NULL;

/* al doilea nod */
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

/* al treilea nod */
    head->next->next = malloc(sizeof(node_t));
    head->next->next->val = 3;
    head->next->next->next = NULL;

    push (head, 12);
    f_push (&head, 21);

    print_list(head);
    pop(head);
    puts("after pop");
    print_list(head);

}


void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
        if (head == NULL) {
        return -1;
    }
    current->next->val = val;
    current->next->next = NULL;
    return -1;
}

int f_push(node_t ** head, int val) {
    node_t * new_node;
    new_node = malloc(sizeof(node_t));
    if (head == NULL) {
        return -1;
    }
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
    return 1;
}

int f_pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}


int pop(node_t * head) {
    int retval = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    /* get to the second to last node in the list */
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    /* now current points to the second to last item of the list, so let's remove current->next */
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}

int remove_by_index(node_t ** head, int n) {
    int i = 0;
    int retval = -1;
    node_t * current = *head;
    node_t * temp_node = NULL;

    if (n == 0) {
        return pop(*head);
    }

    for (i = 0; i < n-1; i++) {
        if (current->next == NULL) {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);

    return retval;

}



