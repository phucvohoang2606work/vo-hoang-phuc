#include <stdio.h>
#include <stdint.h>
#include <math.h>
//Bai_6
void simple_menu_cal() {

	int a, b;
    char operation;
	printf("Enter a and b: ");
	scanf_s("%d %d", &a, &b);
	
	do
	{
		printf("Enter operation: ");
		//scanf_s("%c", &operation);
		scanf_s(" %c", &operation, 1);

	} while ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'));
	switch (operation) {
	case '+': 
		printf("%d + %d = %d", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;
	}
}
//Bai_8 
void month_to_day() {
	int month;
	printf("Enter month: ");
	scanf_s("%d", &month);
	switch (month) {
	    case 1:
		case 3:
		case 5:
		case 7:
		case 8: 
		case 10:
		case 12:
			printf("31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");
			break;
		case 2:
			printf("28 days");
			break;
		default:
			break;
	}
}
//Bai_9
void bit_status_check() {
	int n,k;
	printf("Enter n, k: ");
	scanf_s("%d %d", &n, &k);
	k--;
	int m = (1 << k);
	if (n & m) printf("This is ON");
	else printf("This is OFF");
}
//Bai_10
void access_control() {
	uint8_t permission;
	int temp;
	printf("Enter permission: ");
	scanf_s("%d", &temp);
	permission = (uint8_t)temp;
	int mask = (1 << 1);
	if (permission & mask) printf("Write Access Granted");
	else printf("Access Denied");
}
//Cau truc dieu kien phuc hop
//Bai_11
void Quadratic_Equation() {
	float a, b, c, delta, x1, x2, real, imag;

	printf("Enter coefficients a, b and c: ");
	scanf_s("%f %f %f", &a, &b, &c);

	if (a == 0) {
		if (b != 0) printf("%.2f\n", -c / b);
		else printf("Invalid\n");
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("%.2f and %.2f\n", x1, x2);
		}
		else if (delta == 0) {
			x1 = x2 = -b / (2 * a);
			printf("%.2f\n", x1);
		}
		else {
			real = -b / (2 * a);
			imag = sqrt(-delta) / (2 * a);
			printf("%.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
		}
	}
}
//Bai_12
void Salary_cal() {
		double luong_co_ban, hours, tong_luong, luong_sau_thue;

		printf("Enter luong_co_ban: ");
		scanf_s("%lf", &luong_co_ban);

		printf("Enter hours: ");
		scanf_s("%lf", &hours);

		if (hours > 160) {
			double overtime = hours - 160;
			tong_luong = (160 * luong_co_ban) + (overtime * luong_co_ban * 1.5);
		}
		else tong_luong = hours * luong_co_ban;		

		if (tong_luong > 15000000) luong_sau_thue = tong_luong * 0.9; 
		
		else luong_sau_thue = tong_luong * 0.95;

		printf("Luong sau thue: %.0lf VND", luong_sau_thue);		
}
//Bai_13
void Coordinate() {
	float x, y;
	printf("Enter x and y: ");
	scanf_s("%f %f", &x, &y);

	if (x == 0 && y != 0) printf("Point on Ox");
	else if (x != 0 && y == 0) printf("Point on Oy");
	else if (x > 0 && y > 0) printf("Point on I");
	else if (x > 0 && y < 0) printf("Point on II");
	else if (x < 0 && y < 0) printf("Point on III");
	else if (x < 0 && y > 0) printf("Point on IV");
	else printf("Point on O");
}
//Bai_14
void BMI() {
	double kg, m;
	printf("Enter kg and m: ");
	scanf_s("%lf %lf", &kg, &m);
	double BMI = kg / pow(m, 2);
	printf("The BMI vaule is: %lf\n", BMI);
	if (BMI < 18.5)    printf("Underweight");
	else if (BMI < 25) printf("Normal");
	else if (BMI < 30) printf("Overweight");
	else printf("Obease");

	return 0;
}
//Bai_15
void Traffic_light() {
	char light;
	printf("Enter light: ");
	scanf_s("%c", &light, 1);
	light = toupper(light);
	switch (light) {
	case 'R':
		printf("Stop");
		break;
	case 'Y':
		printf("Slow down");
		break;
	case 'G':
		printf("Go");
		break;
	default:
		printf("Traffic light broken");
		break;
	}
}
//Bai_16
void Num_to_word() {
	int n;
	printf("Enter a number (0-9): "); scanf_s("%d", &n);
	switch (n) {
	case 0:
		printf("Zero");
		break;
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	case 4:
		printf("Four");
		break;
	case 5:
		printf("Five");
		break;
	case 6:
		printf("Six");
		break;
	case 7:
		printf("Seven");
		break;
	case 8:
		printf("Eight");
		break;
	case 9:
		printf("Nine");
		break;
	default: printf("Invalid number");
	}
}
//Bai_17
void Simple_Security_System() {
	int pin, money, balance = 5000000;
    printf("Enter PIN: "); scanf_s("%d", &pin);
	if (pin == 1234) {
		printf("Enter amount: ");
		scanf_s("%d", &money);

		if (money % 50000 == 0) {
			if (money <= balance) printf("Transaction Successful");
			else printf("Insufficient balance");
		}
		else printf("Amount must be multiple of 50,000");
	}
	else printf("Incorrect PIN");
}
//Bai_18 
void check_luy_thua_2() {
	int n;
	printf("Enter a number: ");
	scanf_s("%d", &n);

	if (n > 0 && (n & (n - 1)) == 0) {
		printf("%d is a power of 2", n);
	}
	else printf("%d is not a power of 2", n);

	return 0;
}
//Bai_19
void Device_status_register() {
	int n; 
	printf("Enter n: ");
	scanf_s("%d", &n);
	int bit_7 = n&(1 << 7);
	int bit_6 = n&(1 << 6);
	if (bit_7 == 0) printf("Device is Sleeping");
	else if (bit_7 && !bit_6) printf("Device is Ready");
	else if (bit_7 && bit_6) printf("System Failure");

}


//Bai_20
void charac() {
	char ch;

	printf("Enter a character: ");
	scanf_s(" %c", &ch,1);

	if (ch >= 'A' && ch <= 'Z') {
		printf("Uppercase letter");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("Lowercase letter");
	}
	else if (ch >= '0' && ch <= '9') {
		printf("Digit");
	}
	else {
		printf("Special character");
	}

	return 0;
}

