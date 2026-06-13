#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "lib.h"
// viet ham: khoi tao linked_list 
void link_list_init(linklist* ll) {
	ll->size = 0;
	ll->head = NULL; 
}
// viet ham: de them mot node vao cuoi link_list 
void link_list_add_node(linklist* ll, int val) {
	node* newnode = malloc(sizeof(node));
	newnode->data = val;
	newnode->next = NULL;

	if (ll->head == NULL) ll->head = newnode;
	else {
		node* temp = ll->head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
	ll->size++;
}
// viet ham: de doc gia tri cua mot node trong link list
int link_list_get_val(linklist* ll, int index) {
	node* temp = ll->head;
	for (int i = 0; i < index; i++) {
			temp = temp->next;
	}
	return temp->data;
}
void link_list_remove_node(linklist* ll, int index) {
	node* temp = ll->head;
	if(index != 0)
	{
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		node* del = temp->next;
		temp->next = del->next;
		free(del);
	}
	else {
		node* del = temp;
		ll->head = ll->head->next;
		free(del);
	}
	ll->size--;
}
void link_list_insert_node(linklist* ll, int index, int val) {
	node* insert_node = malloc(sizeof(node));
	insert_node->data = val;
	insert_node->next = NULL;
	node* temp = ll->head;
	if (index < 0 || index > ll->size) return;
	if (index != 0)
	{
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		insert_node->next = temp->next;
		temp->next = insert_node;		
	}
	else {
		insert_node->next = ll->head;
		ll->head = insert_node;
	}
	ll->size++;
}

void show_link_list(linklist* ll) {
	node* temp = ll->head;
	while (temp != NULL) {
		printf("\nThe value of node: %d ", temp->data);
		temp = temp->next;
	}
	
}
