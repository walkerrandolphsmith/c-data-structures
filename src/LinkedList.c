#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	int data;
	struct node *next;
	//bool (*contains)(struct node *);
};

//bool node_contains(struct node *self) {
//	return self->data == 5 || self->next->contains(element);
//}

struct node *head = NULL;

bool isEmpty() {
	return head == NULL;
}

int length() {
	int length = 0;
	struct node *current = head;
	while(current != NULL) {
		length++;
		current = current->next;
	}
	return length;
}

void add(int element) {
	if(head == NULL) {
		head->data = element;
	} else {
		struct node *link = (struct node*) malloc(sizeof(struct node));
		link->data = element;
		head = link;
	}
}

//bool contians(int element) {
//	return head == NULL ? false : head->contains(element);
//}

int main()
{
    //struct node n;
    //node.contains = node_contains;
    //node.contains(&node);

    printf("Is empty: %s \n", isEmpty()? "true" : "false");

    add(5);

    printf("Is empty: %s \n", isEmpty()? "true" : "false");
}
