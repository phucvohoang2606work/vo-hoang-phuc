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
//Bai_3
void dao_nguoc_mang() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	int num = 0;
	for (int i = 0; i < n; i++) {
		num = num * 10 + a[i];
	}
	for (int i = 0; i < n; i++) {
		a[i] = num % 10;
		num = num / 10;
	}
	printf("Reversed array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}    
}
//Bai_4 
void tach_mang() {
	int a[size], n;
	int b[size], c[size];
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);

    int j = 0; int k = 0;

	for (int i = 0; i < n;i++) {
		if (a[i] % 2 == 0) b[j++] = a[i];
		else c[k++] = a[i];
	}
	printf("Element of even: ");
	for (int i = 0; i < j; i++) printf("%d ", b[i]);
	printf("\n");
	printf("Element of odd: ");
	for (int i = 0; i < k; i++) printf("%d ", c[i]);
}
//Bai_5 
void chuan_hoa() {
	float a[size];
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	float max = a[0];
	for (int i = 0; i < n; i++)
		if (max < a[i]) max = a[i];
	for (int i = 0; i < n; i++) {
		a[i] /= max;
	}
	for (int i = 0; i < n; i++) printf("%.4f ", a[i]);
}
//Nhom_3
//Bai_1
int check_tang(int n, int a[]) {
	int flag = 0;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1]) {
			flag = 1;
			break; 
		}
	if (flag) return 0;
}
void kiem_tra_mang_tang() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	if (check_tang (n, a)) printf("Tang dan");
	else printf("Khong tang dan");
}
//Bai_2
void bubblesort() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	int temp;
	for(int i = 0; i < n -1; i++)
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
}
//Bai_3
void tan_so() {
	int a[size], n;
	int b[size] = { 0 };
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	for (int i = 0; i < n; i++) {
		b[a[i]]++; 
	}
	for (int i = 0; i < size; i++)
		if (b[i] != 0) printf("Tan so xuat hien cua %d: %d\n", i, b[i]);
}
//Bai_4 
int check_so_nguyen_to(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) if (n % i == 0) return 0;
	return 1;
}
void so_nguyen_to() {
		int a[size], n;
		printf("Enter n: ");
		scanf_s("%d", &n);
		enter_mang(n, a);
		int sum = 0;

		for (int i = 0; i < n; i++) {

			if (check_so_nguyen_to(a[i])) {
				printf("%d ", a[i]);
				sum += a[i];
			}
		}
		printf("\nTong = %d", sum);
	}
//Bai_5
int xoa_phan_tu() {
	int a[size], n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);
	int k;
	printf("Enter k: ");
	scanf_s("%d", &k);
	if (k > n) return;
	for (int i = k; k < n; k++) {
		a[k] = a[k + 1];
		if (k == n - 1) a[k] = 0;
	}
	for (int i = 0; i < n; i++) printf("%d ", a[i]);	
	return 0;
}
//Bai_6
int chen_phan_tu() {
	int a[size], n, x, k;
	printf("Enter n: ");
	scanf_s("%d", &n);
	enter_mang(n, a);

	printf("Enter x and k: ");
	scanf_s("%d %d", &x, &k);

	if (k > n) return;
	for (int i = n; i > k; i--) a[i] = a[i - 1];
	a[k] = x;
	for (int i = 0; i < n+1; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
//Nhom_4
//Bai_1
#define row 100
#define col 100

void enter_matrix(int m, int n, int a[][col]) {
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
}
void ma_tran_co_ban() {
	int a[row][col];
	int m, n;

	printf("Enter m and n: ");
	scanf_s("%d %d", &m, &n);

	enter_matrix(m, n, a);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
//Bai_2
void tong_hang_cot() {
	int a[row][col];
	int m, n;
	int sum_row, sum_col;
	printf("Enter m and n: ");
	scanf_s("%d %d", &m, &n);
	enter_matrix(m, n, a);

	for (int i = 0; i < m; i++) {
		sum_row = 0;
		for (int j = 0; j < n; j++) sum_row += a[i][j];
		printf("Sum row at %d: %d\n", i, sum_row);
	}
	for (int i = 0; i < n; i++) {
		sum_col = 0;
		for (int j = 0; j < m; j++) sum_col += a[i][j];
		printf("Sum col at %d: %d\n", i, sum_col);
	}
}
//Bai_3
void duong_cheo_chinh() {
	int a[row][col];
	int m, n;
	printf("Enter m and n: ");
	scanf_s("%d %d", &m, &n);
	enter_matrix(m, n, a);
	int sum_diagonal = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) if(i == j) sum_diagonal += a[i][j];
	printf("Sum_diagonal: %d", sum_diagonal);
}
//Bai_4 
void ma_tran_chuyen_vi() {
	int a[row][col];
	int m, n;
	printf("Enter m and n: ");
	scanf_s("%d %d", &m, &n);
	enter_matrix(m, n, a);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("The transpose matrix: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%d ", a[j][i]);
		printf("\n");
	}
}
