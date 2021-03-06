//Node Index Retrieval

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct node {
	int key;
	struct node *next;
} node_t;

node_t *head = NULL;

int main(){
	int i;
	node_t *item;
	for (i = 0; i < 10; i++){
		item = malloc(sizeof(node_t));
		item->key = i << 1;
		item->next = NULL;
		SL_APPEND(head, item);
	}
	SL_FOREACH(head, item) printf("%d\n", item->key);
	SL_INDEX(head, item, 5);
	printf("Node value at index 5: %d\n", item->key);
	return 0;
}
