#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [노현아] [2022041065] -----]\n");
   int **x;//정수형 이중포인터 x선언
   printf("sizeof(x) = %lu\n", sizeof(x));//x의 크기를 부호가 없는 10진수 정수로 출력
   printf("sizeof(*x) = %lu\n", sizeof(*x));//x가 가리키는 값의 크기를 부호가 없는 10진수 정수로 출력
   printf("sizeof(**x) = %lu\n", sizeof(**x));//*x가 가리키는 값의 크기를 부호가 없는 10진수 정수로 출력
}