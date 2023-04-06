#include <stdio.h>
//student1 구조체 선언 및 정의
struct student1 {
   char lastName; //구조체 char형 변수 lastName 선언
   int studentId;//구조체 int 형 변수 studentId 선언
   char grade;//구조체 char형 변수 grade선언
};
//student2 구조체 선언 및 정의
typedef struct {
   char lastName;//구조체 char형 변수 lastName 선언
   int studentId;//구조체 int 형 변수 studentId 선언
   char grade;//구조체 char형 변수 grade선언
} student2;

int main() {
   printf("[----- [노현아] [2022041065] -----]");

   struct student1 st1 = {'A', 100, 'A'};//구조체 변수 st1선언 후 초기화

   printf("st1.lastName = %c\n", st1.lastName);//구조체 변수 st1에 저장되어있는 lastName의 값을 출력
   printf("st1.studentId = %d\n", st1.studentId);//구조체 변수 st1에 저장되어있는 studentId의 값을 출력
   printf("st1.grade = %c\n", st1.grade);//구조체 변수 st1에 저장되어있는 grade의 값을 출력

   student2 st2 = {'B', 200, 'B'};//구조체 변수 st2선언 후 초기화
   printf("\nst2.lastName = %c\n", st2.lastName);//구조체 변수 st2에 저장되어있는 lastName의 값을 출력
   printf("st2.studentId = %d\n", st2.studentId);//구조체 변수 st2에 저장되어있는 studentId의 값을 출력
   printf("st2.grade = %c\n", st2.grade);//구조체 변수 st2에 저장되어있는 grade의 값을 출력

   student2 st3;//구조체 변수 st3 선언
   st3 = st2;//구조체 st2를 st3에 대입(같은 구조체끼리의 대입은 가능하다)
   //구조체 변수 st2에 저장되어있는 값과 모두 동일한 값이 출력된다
   printf("\nst3.lastName = %c\n", st3.lastName);//구조체 변수 st3에 저장되어있는 lastName의 값을 출력
   printf("st3.studentId = %d\n", st3.studentId);//구조체 변수 st3에 저장되어있는 studentId의 값을 출력
   printf("st3.grade = %c\n", st3.grade);//구조체 변수 st3에 저장되어있는 grade의 값을 출력

   /* equality test */
   //구조체변수 st3과 st2가 같은 지 비교 
   if((st3.lastName == st2.lastName)&&(st3.studentId==st2.studentId)&&(st2.grade==st3.grade))
      printf("equal\n");//같다면 equal 출력
   else
      printf("not equal\n");//다르다면 not equal 출력
   return 0;
}