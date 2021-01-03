#include <stdio.h>

int stringLength(const char* string);

int main() {
	printf("%d \n", stringLength("stringLength test"));
	printf("%d \n", stringLength(""));
	printf("%d \n", stringLength("Tomek"));

	return 0;
}

int stringLength(const char* string) {
	const char* lastAddress = string;

	while (*lastAddress) {
		++lastAddress;
	}

	return lastAddress - string;
}