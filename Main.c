
#include <stdio.h>
int main() {
    int testInteger = 5;
    
    int *ptr = &testInteger;

    printf("Adress: %x\n", ptr);
    printf("Value: %x\n", *ptr)
}