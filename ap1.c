#include <stdio.h>
#include <stdlib.h>

void main()
{
   printf("[----- [노현아] [2022041065] -----]\n");

   int list[5]; //5개의 원소를 가지는 정수형 일차원 배열 list 선언
   int *plist[5] = {NULL,};// 정수에 대한 5개의 포인터변수들을 배열요소로 갖는 포인터배열 선언 후 초기화

   plist[0] = (int *)malloc(sizeof(int));//동적메모리할당, int*형으로 int의 크기만큼 메모리를 동적으로 할당받아 plist[0]에 대압
   list[0] = 1;//list[0]에 1을 대입한다
   list[1] = 100;//list[1]에 100을 대입한다
   *plist[0] = 200;//포인터 배열 plist[0]이 가리키는 값에 200대입

   printf("list[0] = %d\n", list[0]);//list[0]의 값을 출력
   printf("&list[0] = %p\n", &list[0]);//list[0]의 주소값을 16진수로 출력
   printf("list = %p\n", list);//list는 list[0]와 같은 의미로 이를 16진수로 출력
   printf("&list = %p\n", &list);//list는 list[0]와 같은 의미, list의 주소를 16진수로 출력
   printf("----------------------------------------\n\n");

   printf("list[1] = %d\n", list[1]);//list[1]의 값 출력
   printf("&list[1] = %p\n", &list[1]);//list[1]의 주소값을 16진수로 출력
   printf("*(list+1) = %d\n", *(list + 1));//포인터 list+1 역참조 한값을 정수형으로 출력(=list[1])
   printf("list+1 = %p\n", list+1);//list+1을 16진수로 출력 (=&list[1])
   printf("----------------------------------------\n\n");

   printf("*plist[0] = %d\n", *plist[0]);//포인터배열 plist[0]이 가리키는 값을 역참조 하여 정수형으로 출력
   printf("&plist[0] = %p\n", &plist[0]);//포인터배열 plist[0]의 주소값을 16진수로 출력
   printf("&plist = %p\n", &plist);//포인터배열 변수 plist는 plist[0]과 같기에 &plist는 &plist[0]과 같은값이 출력된다->16진수출력
   printf("plist = %p\n", plist);//포인터배열 변수 plist는 plist[0]과 같아 plist[0]의 주소값과 같은 값이 나온다.->16진수출력
//16진수 출력
   printf("plist[0] = %p\n", plist[0]);//plist[0]의 값 출력
   printf("plist[1] = %p\n", plist[1]);//plist[1]은 NULL값으로 초기화 되어있으며 이를 출력
   printf("plist[2] = %p\n", plist[2]);//plist[2]은 NULL값으로 초기화 되어있으며 이를 출력
   printf("plist[3] = %p\n", plist[3]);//plist[3]은 NULL값으로 초기화 되어있으며 이를 출력
   printf("plist[4] = %p\n", plist[4]);//plist[4]은 NULL값으로 초기화 되어있으며 이를 출력

   free(plist[0]);//동적할당 메모리 해제
}