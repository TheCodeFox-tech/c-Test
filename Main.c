
#include <stdio.h>
int main() {
    int testInteger = 5;
    
    int *ptr = &testInteger;

    printf("Adress: %d\n", ptr);
    printf("Value: %d\n", *ptr);
}