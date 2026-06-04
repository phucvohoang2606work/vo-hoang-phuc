//Bai_1
int my_strlen(char* s) {
	int len = 0;
	while (s[len] != '\0') len++;
	return len;
}
void do_dai_chuoi() {
	char s[100];
	printf("Enter string: ");
	fgets(s, sizeof(s), stdin);

	printf("Length = %d", my_strlen(s));
}

//Bai_2
void in_hoa() {
	char str[] = "hello world 123";
	char* ptr = str;
	while (*ptr != '\0') {
		if (*ptr >= 'a' && *ptr <= 'z') *ptr = *ptr - 32;
		ptr++;
	}
	printf("so luong ky tu: %s", str);
}

//Bai_3 
char* ham_tim_ky_tu(char* str) {
	char charac;
	printf("Enter substr: ");
	scanf_s("%c", &charac, 1);
	while (getchar() != '\n');
	char *position = NULL;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == charac) {
			position = &str[i];
			break;
		}
	}
	return position; 
}
void tim_ky_tu() {
	char str[100];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	char* ptr = ham_tim_ky_tu(str);
	if (ptr != NULL) {
		printf("Found at %d\n", (int)(ptr - str));
	}
	else {
		printf("Not found\n");
	}
}
//Bai_4 
char* ham_noi_chuoi(char* str1, char* str2) {
	char* p = str1;

	while (*p != '\0')
		p++;

	while (*str2 != '\0') {
		*p = *str2;
		p++;
		str2++;
	}
	*p = '\0';

	return str1;
}
void noi_chuoi() {
	char str1[200];
	char str2[100];

	printf("Enter str1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';

	printf("Enter str2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';

	ham_noi_chuoi(str1, str2);

	printf("Chuoi noi: %s\n", str1);
}
//Bai_5 
int ham_tim_chuoi_con(char* str1, char* str2) {
	char* ptr1 = str1;
	int flag;
	while (*ptr1 != '\0') {
		flag = 1;
		for (int i = 0; str2[i] != '\0'; i++) {
			if (*(ptr1 + i) != *(str2 + i)) {
				flag = 0;
				break;
			}
		}
        if (flag) return 1;
       
		ptr1++;
	}	
	return 0;
}
void tim_chuoi_con() {
	char str[100], substr[100];
	printf("Enter str: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Enter substr: ");
	fgets(substr, sizeof(substr), stdin);
	substr[strcspn(substr, "\n")] = '\0';
	
	if (ham_tim_chuoi_con(str, substr)) printf("Chuoi con co trong chuoi lon: %s", substr);
	else printf("Chuoi con khong co");
	
}
