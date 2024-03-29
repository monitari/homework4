#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};
typedef struct {
    char lastName;
    int studentId;
    char grade; 
} student2;

int main() {
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    printf("========== 2023041018 ±èÁØÈÄ ==========\n");

    student2 st2 = {'B', 200, 'B'};
    printf("st2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    printf("========== 2023041018 ±èÁØÈÄ ==========\n");

    student2 st3;
    st3 = st2;
    printf("st3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //if (st3 == st2) printf("equal\n");
    if ((st3.lastName == st2.lastName) 
    && (st3.studentId == st2.studentId)
    && (st3.grade == st2.grade)) printf("\nequal\n");
    else printf("\nnot equal\n");
    return 0;
}
