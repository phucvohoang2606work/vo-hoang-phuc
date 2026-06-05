#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "lib.h"

void main() {
	//bai_1();
	linklist B;
	link_list_init(&B);
	link_list_add_node(&B, 10);
	link_list_add_node(&B, 20);
	link_list_add_node(&B, 30);
	link_list_add_node(&B, 40);
	link_list_add_node(&B, 50);
	printf("Gia tri cua node tai 2: %d",link_list_get_val(&B, 2));
	show_link_list(&B);
	printf("\nAfter being removed\n");
	link_list_remove_node(&B, 0);
	show_link_list(&B);

	printf("\nAfter being inserted\n");
	link_list_insert_node(&B, 0, 100);
	show_link_list(&B);
	//btvn
	//void link_list_remove_node(link_list* ll, int index);
	//void link_list_insert_node(link_list* ll, int index, int val);
	//void link_list_show_all_node();
}