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

//continue 
