#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	int data;
	struct node *next;
};

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

int add(element) {
	if(head === NULL) {
		head->data = element;
	} else {
		struct node *link = (struct node*) malloc(sizeof(struct node));
		link->data = element;
		head = link;
	}
}

int main()
{
    printf("Is empty: %s \n", isEmpty()? "true" : "false");
}
