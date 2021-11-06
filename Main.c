#include <stdio.h>
#include <stdlib.h>

int main() {
   char desc;

   desc = malloc(250);

   free(desc);
   return 0;
}