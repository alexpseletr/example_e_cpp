#include <stdio.h>

unsigned int num_hex_digits(unsigned int n) {
    int ret = 0;
    while(n) {
        n >>= 4;
        ++ret;
    }
    return ret;
}

void make_hex_string_easy(unsigned int invokeid, char** xref) 
{ 
    int pad = 0;
    int len = num_hex_digits(invokeid);
    /* if odd number, add 1 - zero pad number */
    if(len % 2 != 0)
        pad = 1;

    sprintf(*xref, "%s%X", pad ? "0" : "", invokeid);
}

void make_hex_string_learning(unsigned int invokeid, char** xref) 
{                                                                                                                                                                                                                               
    char* p = *xref;
    int pad = 0;
    int len = num_hex_digits(invokeid);
    /* if odd number, add 1 - zero pad number */
    if(len % 2 != 0)
        pad = 1;

    /* move to end of number string */
    p+= len + pad - 1;

    while(invokeid) {
        int tmp = invokeid & 0xF;
        if(tmp < 10)
            *p = tmp + '0';
        else 
            *p = tmp + 'A' - 10;

        invokeid >>= 4;

        p--;    
    } 

    if(pad) {
        *p = '0';
    }
}


int main() {
    unsigned int testdata[] = {~0, 1, 255, 256, 0xFFFE, 0xFFFF, 0x10000, 0xABC };
    int sz = sizeof(testdata) / sizeof(int);
    int i;

    char* test = (char*) calloc (20, 1);
    printf("Using sprintf method\n");
    for(i = 0; i < sz; ++i) {
        make_hex_string_easy(testdata[i], &test);
        printf("hex string of %#10x = \t%10s\n", testdata[i], test);
        memset(test, 0, 20);
    }

    printf("\nUsing homegrown method\n");
    for(i = 0; i < sz; ++i) {
        make_hex_string_learning(testdata[i], &test);
        printf("hex string of %#10x = \t%10s\n", testdata[i], test);
        memset(test, 0, 20);
    }
    free(test);

    return 0;
}
