#include <stdio.h>
struct student {
    char lastName[13]; // 13 bytes
    int studentId; // 4 bytes
    short grade; // 2 bytes
}; /* ����ü student�� ���� */

int main() {
    struct student pst; // ����ü student Ÿ���� ���� pst�� ����
    printf("========== 2023041018 ������ ==========\n");
    printf("size of student = %ld\n", sizeof(struct student));
    /* ����ü student�� ũ��(����Ʈ ����)�� ��� 
    = 24����Ʈ (13 + 4 + 2 + 5(padding)) */
    printf("size of int = %ld\n", sizeof(int)); 
    /* int�� ũ��(����Ʈ ����)�� ��� = 4����Ʈ */
    printf("size of short = %ld\n", sizeof(short)); 
    /* short�� ũ��(����Ʈ ����)�� ��� = 2����Ʈ */
    return 0;
}