#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
}; /* 구조체 student1을 정의 */
typedef struct {
    char lastName;
    int studentId;
    char grade; 
} student2;
/* typedef로 구조체 student2를 정의 */
int main() {
    struct student1 st1 = {'A', 100, 'A'};
    /* 구조체 student1 타입의 변수 st1을 선언하고 초기화 */
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    printf("========== 2023041018 김준후 ==========\n");
    /* st1 구조체의 각 멤버 값을 출력 */
    student2 st2 = {'B', 200, 'B'};
    /* 구조체 student2 타입의 변수 st2를 선언하고 초기화 */
    printf("st2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    printf("========== 2023041018 김준후 ==========\n");
    /* st2 구조체의 각 멤버 값을 출력 */
    student2 st3;
    st3 = st2;
    /* 구조체 student2 타입의 변수 st3를 선언하고 st2의 값으로 초기화 */
    printf("st3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* st3 구조체의 각 멤버 값을 출력 */
    //if (st3 == st2) printf("equal\n");
    /* 주석 처리된 코드: 구조체 변수의 비교는 이렇게 할 수 없다. */
    if ((st3.lastName == st2.lastName) 
    && (st3.studentId == st2.studentId)
    && (st3.grade == st2.grade)) printf("\nequal\n");
    else printf("\nnot equal\n");
    return 0;
    /* st3와 st2의 각 멤버 값을 비교하여 같으면 equal, 다르면 not equal을 출력 */
}
