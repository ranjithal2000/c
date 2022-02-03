#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char *cptr = NULL;
  cptr = (char *) malloc (6 * sizeof(char));
  if (cptr == NULL) {
    printf("Failed to allocate memory space. Terminating program...");
    return -1;
  }
  printf("Enter 5 letters word: ");
  scanf("%s", cptr);
  printf("Word you entered: %s\n", cptr);
  cptr = realloc(cptr, (9 * sizeof(char)));
  if (cptr == NULL) {
    printf("Failed to reallocate new memory space. Terminating program...");
    return -1;
  }
  printf("\nContent of the allocated memory space after reallocation:\n");
  printf("%s\n\n", cptr);
  printf("Enter 8 letters word: ");
  scanf("%s", cptr);
  printf("Word you entered: %s\n", cptr);
  free(cptr);
  return 0;
}
