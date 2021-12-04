#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/types.h>
#include <string.h>


int main(int argc, char **argv) {
        char *homedir = getenv("HOME");

        if (homedir != NULL) {
                printf("Home dir in enviroment");
                printf("%s\n", homedir);
                printf("strcat file   ");
                printf("%s\n", strcat(homedir,"/.lockfailover"));
        }

        uid_t uid = getuid();
        struct passwd *pw = getpwuid(uid);

        if (pw == NULL) {
                printf("Failed\n");
                exit(EXIT_FAILURE);
        }

        printf("%s\n", pw->pw_dir);

        return 0;
}
