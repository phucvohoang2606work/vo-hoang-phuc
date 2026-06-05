#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "lib.h"
// struct de mieu ta doi tuong la mang co dan
// dia chi cuar mang
// so luong phan tu cua mang
// viet ham khoi tao mang
void array_init(mang_co_dan* addr_ptr, int so_luong) {
	//mang_co_dan* initial = (mang_co_dan*)malloc(so_luong * sizeof(mang_co_dan));
	//if (initial == NULL) printf("memory allocation failed");
	addr_ptr->dia_chi_vung_nho = malloc(so_luong * 4);
	addr_ptr->so_luong = so_luong;
}
void array_set_val(mang_co_dan* addr_ptr, int index, int val) {
	addr_ptr->dia_chi_vung_nho[index] = val;	
}
void set_all_val(mang_co_dan* addr_ptr) {
	for (int i = 0; i < addr_ptr->so_luong; i++) {
		printf("Enter digit %d: ", i);
		scanf_s("%d", &addr_ptr->dia_chi_vung_nho[i]);
	}
}
int array_get_value(mang_co_dan* addr_ptr, int index) {
	//lay gia tri cua mang co dan ra
	return addr_ptr->dia_chi_vung_nho[index];
}
void array_resize(mang_co_dan* addr_ptr, int size) {
	// size phai lon hon so luong
	// cap phat vung nho moi voi kich thuoc moi
	// copy du lieu tu vung nho cu sang moi
	// gan lai so luong phan tu voi size moi 
	// xoa vung nho cu
	// 
	//mang_co_dan* temp;
	//temp->dia_chi_vung_nho = realloc(temp->dia_chi_vung_nho, size*4);
	//if (temp == NULL) {
	//	printf("Don't have enough memory");
	//	return;
	//}
	
	//addr_ptr->dia_chi_vung_nho = temp->dia_chi_vung_nho;
	//addr_ptr->dia_chi_vung_nho = size;
	int* vung_nho_moi = malloc(size * 4);
	int* vung_nho_cu = addr_ptr->dia_chi_vung_nho;
	for (int i = 0; i < addr_ptr->so_luong; i++) {
		vung_nho_moi[i] = vung_nho_cu[i];
		if (size <= i) break;
	}
	addr_ptr->dia_chi_vung_nho = vung_nho_moi;
	addr_ptr->so_luong = size; 
	free(vung_nho_cu);
}
void array_show(mang_co_dan* addr_ptr) {
	for (int i = 0; i < addr_ptr->so_luong; i++) {
		printf("%d ", addr_ptr->dia_chi_vung_nho[i]);
	}
}
int array_sum(mang_co_dan* addr_ptr) {
	int sum = 0;
	for (int i = 0; i < addr_ptr->so_luong; i++) sum += addr_ptr->dia_chi_vung_nho[i];
}
