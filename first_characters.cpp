#include <stdio.h>

int main(void) {
	char *minhastring = "HTJxxxxxxxxxxxxxxxxxxxx";
	char tres_primeiros[8];
	memcpy( tres_primeiros, &minhastring[0], 7);
	tres_primeiros[7] = '\0';
	printf("%s", tres_primeiros);
	
	return 0;
}
