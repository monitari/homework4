#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
}; /* ����ü student1�� ���� */
typedef struct {
    char lastName;
    int studentId;
    char grade; 
} student2;
/* typedef�� ����ü student2�� ���� */
int main() {
    struct student1 st1 = {'A', 100, 'A'};
    /* ����ü student1 Ÿ���� ���� st1�� �����ϰ� �ʱ�ȭ */
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    printf("========== 2023041018 ������ ==========\n");
    /* st1 ����ü�� �� ��� ���� ��� */
    student2 st2 = {'B', 200, 'B'};
    /* ����ü student2 Ÿ���� ���� st2�� �����ϰ� �ʱ�ȭ */
    printf("st2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    printf("========== 2023041018 ������ ==========\n");
    /* st2 ����ü�� �� ��� ���� ��� */
    student2 st3;
    st3 = st2;
    /* ����ü student2 Ÿ���� ���� st3�� �����ϰ� st2�� ������ �ʱ�ȭ */
    printf("st3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* st3 ����ü�� �� ��� ���� ��� */
    //if (st3 == st2) printf("equal\n");
    /* �ּ� ó���� �ڵ�: ����ü ������ �񱳴� �̷��� �� �� ����. */
    if ((st3.lastName == st2.lastName) 
    && (st3.studentId == st2.studentId)
    && (st3.grade == st2.grade)) printf("\nequal\n");
    else printf("\nnot equal\n");
    return 0;
    /* st3�� st2�� �� ��� ���� ���Ͽ� ������ equal, �ٸ��� not equal�� ��� */
}
