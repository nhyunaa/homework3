#include <stdio.h>
void print_one(int *ptr, int rows);// void함수 print_one함수 원형 선언
int main()
{
    printf("[----- [노현아] [2022041065] -----]\n");
   int one[] = {0, 1, 2, 3, 4};//정수형 일차원 배열 one 선언 후 초기화
   printf("one = %p\n", one);//one은 one[0]을 가리키는 포인터로 이 값을 출력한다
   printf("&one = %p\n", &one);//one은 one[0]을 가리키는 포인터로 이 주소를 출력한다
   printf("&one[0] = %p\n", &one[0]);//one[0]의 주소를 출력한다
   printf("\n");
   printf("------------------------------------\n");
   printf(" print_one(&one[0], 5) \n");
   printf("------------------------------------\n");
   print_one(&one[0], 5);//print_one함수 호출
   printf("------------------------------------\n");
   printf(" print_one(one, 5) \n");
   printf("------------------------------------\n");
   print_one(one, 5);//print_one함수 호출

   return 0;
}

void print_one(int *ptr, int rows)
//void함수 print_one은 배열을 함수의 전달인자로 사용하기 위해 포인터 ptr을 매개변수로 선언,정수형 rows매개변수선언 
{/* print out a one-dimensional array using a pointer */
   int i;//정수형 변수 i선언
   printf ("Address \t Contents\n");
   for (i = 0; i < rows; i++)
      printf("%p \t %5d\n", ptr + i, *(ptr + i));//rows번 반복하며 ptr부터 ptr+(rows-1)까지 즉 주소를 출력하고 
      //ptr부터 ptr+(rows-1)이 가리키는 값을 출력
   printf("\n");
}