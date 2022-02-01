#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;
   str = (char *) malloc(15);
   strcpy(str, "Welcome to CITECH");
   printf("String = %s,  Address = %u\n", str, str);
   str = (char *) realloc(str, 25);
   strcat(str, " Hello Everyone!!!");
   printf("String = %s,  Address = %u\n", str, str);
   free(str);
   printf("String = %s,  Address = %u\n", str, str);
   return(0);
}
