#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x;
    printf("========== 2023041018 ������ ==========\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
}