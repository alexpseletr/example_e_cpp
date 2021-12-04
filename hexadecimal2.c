#include <stdio.h>
 
int main(void) { 
    int n;
    char hex_val[50];
 
    n = atoi("100663296");
    sprintf(hex_val, "%x", n);
 
    printf("%s", hex_val);
    return 0;
}
