#include <stdio.h>
#include <stdlib.h>

void main() {
    int **x; //���� ������ �Լ� ����
    printf("========== 2023041018 ������ ==========\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); 
    //������ x�� ũ��(����Ʈ ����)�� ���
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    //x�� ����Ű�� �������� ũ��(����Ʈ ����)�� ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
    //x�� ����Ű�� �����Ͱ� ����Ű�� ���� ������(int)�� ũ��(����Ʈ ����)�� ���
}