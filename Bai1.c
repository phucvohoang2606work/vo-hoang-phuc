#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "lib.h"
void bai_1() {
	mang_co_dan A;
	int so_luong;
	printf("Enter so luong: ");
	scanf_s("%d", &so_luong);
	array_init(&A, so_luong);
	//array_set_val(&A, 2, 5);
	set_all_val(&A);
	array_get_value(&A, 2);
	printf("Value tai index 2: %d\n", array_get_value(&A, 2));
	//array_resize(&A, 5);
	array_show(&A);
	printf("\nSum cua srtuct: %d", array_sum(&A));
}