#include <stdio.h>      // printf
#include <sys/stat.h>   // stat
#include <stdbool.h>    // bool type

bool file_exists (char *filename) {
  struct stat   buffer;   
  return (stat (filename, &buffer) == 0);
}

int main() {
    if (file_exists("0_schematic.txt"))
        printf("%s exists\n");
    else
        printf("%s does not exist\n");

    return 0;
}
