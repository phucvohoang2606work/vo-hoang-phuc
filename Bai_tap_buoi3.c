#include <stdio.h>
#include <stdint.h>
#include <math.h>

//Nhom_1
//Bai_1
void so_chan() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i += 2) printf("%d ", i);
}
//Bai_2
void bang_cuu_chuong1() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= 10; i++)
		printf("%d x %d = %d\n", n, i, n * i);
}
//Bai_3
void tong_binh_phuong() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) sum += i*i;
	printf("%d", sum);
}
//Bai_4
void tong_nghich_dao() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	float sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1 / (float) i;
	printf("%f", sum);
}
//Bai_5
void cac_so_cach_deu() {
	int a, b, k;
	printf("Enter a, b, k: ");
	scanf_s("%d %d %d", &a, &b, &k);
	for (int i = a; i <= b; i += k)
		printf("%d ", i);
}

//Nhom_2
//Bai_1
void dem_chu_so() {
	int n, count = 0;
	do{
		printf("Input pos n: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	while (n != 0) {
		n = n / 10;
		count++;
	}
	printf("Numbers = %d", count);
}
//Bai_2
void dem_chu_so_le() {
	int n, count = 0;
	do {
		printf("Input pos n: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	while (n != 0) {
		if ((n % 10) % 2 == 1) count++;
		n = n / 10;
	}
	printf("Odd numbers = %d", count);
}
//Bai_3
void chu_so_lon_nhat() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	int max = n % 10;
	while (n != 0) {
		n /= 10;
		if ((n % 10) > max) max = n % 10;
	}
	printf("The largest number: %d", max);
}
//Bai_4
void so_dao_nguoc() {
	int n, so_dao_nguoc = 0;
	printf("Enter n: ");
	scanf_s("%d", &n);
	while (n != 0) {
		so_dao_nguoc = so_dao_nguoc * 10 + n % 10;
		n /= 10;
	}
	printf("So_dao_nguoc: %d", so_dao_nguoc);
}
//Bai_5 
int function(n) {
	int so_dao_nguoc = 0;
	while (n != 0) {
		so_dao_nguoc = so_dao_nguoc * 10 + n % 10;
		n /= 10;
	}
	return so_dao_nguoc;
}
void Palindrome() {
	int n; 
	printf("Enter n: ");
	scanf_s("%d", &n);
	int so_dao_nguoc = function(n);
	if (n == so_dao_nguoc) printf("La so Palindrome");
	else printf("Khong phai Palindrome");
}
//Nhom_3
//Bai_1
void UCLN() {
	int a, b;
	printf("Enter a and b: ");
	scanf_s("%d%d", &a, &b);
	while (a != b) {
		if (a > b) a = a - b;
		else       b = b - a;
	}
	printf("%d", a);
}
//Bai_2 
int find_UCLN(int a, int b) {
	while (a != b) {
		if (a > b) a = a - b;
		else       b = b - a;
	}
	return a;
}
void BCNN() {
	int a, b;
	printf("Enter a and b: ");
	scanf_s("%d%d", &a, &b);
	int BCNN = a * b / find_UCLN(a, b);
	printf("BCNN: %d", BCNN);
}
//Bai_3
int check(int n) {
	int sum = 0;
	for (int i = 1;i <= n / 2;i++) {
		if (n % i == 0) sum += i;
	}
	if (sum == n) return 1; 
	return 0;
}
void so_hoan_hao() {
	int n;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	if (check(n)) printf("%d la so hoan hao.", n);
	else printf("%d khong phai la so hoan hao.", n);
}
//Bai_4
int prime[100];
int check_so_nguyen_to() {
	for (int i = 0; i < 100; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i < sqrt(100); i++) {
		if(prime[i]) for (int j = i * i; j < 100; j += i) prime[j] = 0;
	}
}
void so_nguyen_to() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	check_so_nguyen_to();
	for (int i = 0; i < n; i++) if (prime[i]) printf("%d ", i);
}
//Bai_5
void fibonacci() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	int a = 1, b = 1, next;
	for (int i = 1; i <= n; i++) {
		printf("%d ", a);
		next = a + b;
		a = b;
		b = next;
	}
}
//Bai_6
void pi_leibniz() {
	int n;
	printf("Enter n: ");
	scanf_s("%d", &n);
	float sum = 0.0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) sum += 1.0 / (2*i+1);
		else sum -= 1.0 / (2*i+1);
	}
	double pi = 4 * sum;
	printf("PI = %f", pi);
}
//Nhom_4
//Bai_1
void hinh_chu_nhat_dac() {
	int w, h;
	printf("Enter w, h: ");
	scanf_s("%d%d", &w, &h);
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			printf(". ");
		printf("\n");
	}
}
//Bai_2
void tam_giac_vuong_can() {
	int a;
	printf("Enter a: ");
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++)
			printf(". ");
		printf("\n");
	}
}
//Bai3
void tam_giac_vuong_nguoc() {
	int a;
	printf("Enter a: ");
	scanf_s("%d", &a);
	for (int i = a; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf(". ");
		printf("\n");
	}
}
//Bai4
void hinh_kim_cuong() {
	int h;
	do {
		printf("Enter h: ");
		scanf_s("%d", &h);
	} while (h % 2 == 0 || h <= 0);

	int mid = h / 2;
	for (int i = 0; i < mid; i++) {
		for (int s = 0; s < mid - i; s++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf(".");
		printf("\n");
	}
	for (int i = mid - 1; i >= 0; i--) {
		for (int s = 0; s < mid - i; s++) printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) printf(".");
		printf("\n");
	}
}




