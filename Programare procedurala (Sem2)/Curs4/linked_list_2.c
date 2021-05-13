//gcc -Wall linked_list_2.c -o linked_list_2

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

   printf("dim struct: %ld\n", sizeof(node_t));
   printf("head addr: %p\n", &head);
   printf("head: %p\n", head);
   printf("head val: %d\n", head->val);
   printf("head next: %p\n", head->next);
   printf("head->next val: %d\n", head->next->val);
   printf("head->next next: %p\n", head->next->next);
   printf("head->next->next val: %d\n", head->next->next->val);
   printf("head->next->next next: %p\n", head->next->next->next);
}


