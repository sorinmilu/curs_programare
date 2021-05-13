//gcc -Wall linked_list_1.c -o linked_list_1

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
   int val;
   struct node * next;
} node_t;


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
}


