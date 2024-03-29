#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x; //이중 포인터 함수 선언
    printf("========== 2023041018 김준후 ==========\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    //포인터 x의 크기(바이트 단위)를 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    //x가 가리키는 포인터의 크기(바이트 단위)를 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
    //x가 가리키는 포인터가 가리키는 실제 데이터(int)의 크기(바이트 단위)를 출력
}