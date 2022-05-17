#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int main() {
	int a;
	printf("input data: ");
	scanf(" %d", &a);
	if (a == 1)
		printf("yes");
	else if (a == 3)
		printf("no");
}
