#include <stdio.h>
#include <stdint.h>
#define size 10
//Nhom_1
//Bai_1
void nhap_xuat_mang() {
	int a[size];
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	for (int i = n-1; i >= 0; i--)
		printf("%d ", a[i]);
}
//Bai_2
void enter_mang(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
void tong_trungBinh() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	int sum = 0;
	enter_mang(n, a);

	for (int i = 0; i < n; i++) sum += a[i];
	float avg = (float)sum / n;

	printf("Sum = %d\n", sum);
	printf("Average = %.2f\n", avg);
}
//Bai_3
void tim_min_max() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	int min = a[0];
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}
	printf("Min = %d\n", min);
	printf("Max = %d\n", max);
}
//Bai_4
void dem_phan_tu() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	int pos = 0, neg = 0, zero = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) pos++;
		else if (a[i] < 0) neg++;
		else zero++;
	}
	printf("So duong = %d\n", pos);
	printf("So am = %d\n", neg);
	printf("So 0 = %d\n", zero);
}
//Bai_5
void kiem_vi_tri() {
	int a[size], n;
    int x, flag = 0, pos;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	
	printf("Enter x: ");
	scanf_s("%d", &x);
	for (int i = 0; i < n;i++) {
		if (a[i] == x) {
			pos = i;
			flag = 1;
		}
	}
	if (flag) printf("X at position %d", pos);
	else printf("Can not find x");	
}

//Nhom_2
//Bai_1
void thay_so_am() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
			a[i] = 0;
	}
	for (int i = 0; i < n;i++) {
		printf("%d ", a[i]);
	}
}
//Bai_2
void tang_vi_tri_chan() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	for (int i = 0; i < n; i++) if (i % 2 == 0) a[i] += 2;
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
//continue 

