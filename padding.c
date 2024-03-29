#include <stdio.h>
struct student {
    char lastName[13]; // 13 bytes
    int studentId; // 4 bytes
    short grade; // 2 bytes
}; /* 구조체 student를 정의 */

int main() {
    struct student pst; // 구조체 student 타입의 변수 pst를 선언
    printf("========== 2023041018 김준후 ==========\n");
    printf("size of student = %ld\n", sizeof(struct student));
    /* 구조체 student의 크기(바이트 단위)를 출력 
    = 24바이트 (13 + 4 + 2 + 5(padding)) */
    printf("size of int = %ld\n", sizeof(int)); 
    /* int의 크기(바이트 단위)를 출력 = 4바이트 */
    printf("size of short = %ld\n", sizeof(short)); 
    /* short의 크기(바이트 단위)를 출력 = 2바이트 */
    return 0;
}