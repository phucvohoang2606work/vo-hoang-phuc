#include <stdio.h>
#include "libc.h"
#include "string.h"
typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

const char* data = "HTTP1.1 200 OK{"\
"\"light\": \"on\","\
"\"fan\" : \"off\","\
"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data);

int ques4()
{
	smartHome_t x = pair_data(data);
	printf("Light: %d\n", x.light);
	printf("Fan: %d\n", x.fan);
	printf("Motor: %d\n", x.motor);
	return 0;
}

smartHome_t pair_data(const char* data) {
	smartHome_t state = { 0,0,0 };
	char substr[3][20] = {"\"light\": \"on\",", "\"fan\" : \"off\",", "\"motor\" : \"off\""};
	char* substr1 = "\"light\": \"on\"";
	char* substr2 = "\"fan\" : \"off\"";
	char* substr3 = "\"motor\" : \"off\"";
	if (strstr(data, substr1)) {
		state.light = 1;
	}
	else state.light = 0;
	if (strstr(data, substr2)) {
		state.fan = 0;
	}
	else state.fan = 1;
	if (strstr(data, substr3)) {
		state.motor = 0;
	}
	else state.motor = 1;

}
