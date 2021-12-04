#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   FILE * fp;
   char *homedir = getenv("HOME");
   
   fp = fopen (strcat(homedir,"/file.txt"), "w+");
   fprintf(fp, "%s %s %s %d", "We", "are", "in", 2012);
   printf(strcat(homedir,"/file.txt"));
   fclose(fp);
   
   return(0);
}


//fopen com "r" 
// syscall pra isso é access
