#include <stdio.h>
#define MAX_SIZE 100 // 매크로 상수 선언

float sum1(float list[], int);//함수 원형 선언, 실수형 일차원 배열 list매개변수로 가짐
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;//MAX_SIZE크기를 가지는 실수형 일차원 배열 input을 선언, 실수형 변수 answer 선언
int i;//정수형 전역변수 i 선언

void main(void)
{
    printf("[----- [노현아] [2022041065] -----]\n");
   for(i=0; i < MAX_SIZE; i++)
      input[i] = i; //MAX_SIZE 크기 만큼 (100) 반복하며 실수형 일차원 배열 input에 0부터 99까지 값을 대입한다.
   /* for checking call by reference */
   printf("--------------------------------------\n");
   printf(" sum1(input, MAX_SIZE) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input은 input[0]과 같은 의미로 이의 주소를 출력한다
   answer = sum1(input, MAX_SIZE);//answer에 sum1함수값의 결과를 넘겨준다. sum1의 함수는 input과 MAX_SIZE를 매개변수로 받는다
   printf("The sum is: %f\n\n", answer);//answer의 값을 출력한다 

   printf("--------------------------------------\n");
   printf(" sum2(input, MAX_SIZE) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input은 input[0]과 같은 의미로 이의 주소를 출력한다
   answer = sum2(input, MAX_SIZE);//answer에 sum2함수값의 결과를 넘겨준다. sum2의 함수는 input과 MAX_SIZE를 매개변수로 받는다
   printf("The sum is: %f\n\n", answer);//answer의 값을 출력한다

   printf("--------------------------------------\n");
   printf(" sum3(MAX_SIZE, input) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input은 input[0]과 같은 의미로 이의 주소를 출력한다
   answer = sum3(MAX_SIZE, input);//answer에 sum3함수값의 결과를 넘겨준다. sum3의 함수는 MAX_SIZE와 input을 매개변수로 받는다
   printf("The sum is: %f\n\n", answer);//answer의 값을 출력한다.
}

float sum1(float list[], int n) {//실수형 함수 sum1은 실수형 일차원배열과 정수형 n을 매개변수로 가진다
   printf("list\t= %p\n", list);//list는 list[0]을 가르키는 포인터로 이 값을 출력한다
   printf("&list\t= %p\n\n", &list);//list는 list[0]을 가르키는 포인터이며 주소를 출력한다
   int i;//정수형 변수 i선언
   float tempsum = 0;//실수형 변수 tempsum 선언후 0으로 초기화

   for(i = 0;i < n;i++)
      tempsum += list[i];//n번 반복하며 tempsum에 list[0]의 값부터 list[n-1]의 값까지 더한값을 대입.
   return tempsum;//tempsum으로 반환
}
//배열을 함수의 전달 인자로 사용하려면 배열의 변수명은 첫 번째 원소의 주소값이기 때문에 매개변수의 타입은 포인터가 되어야 한다.
float sum2(float *list, int n) {
   //실수형 함수 sum2은 배열을 함수의 전달인자로 사용하기 위해 포인터 list를 매개변수로 선언, 정수형 변수 n 선언
   printf("list\t= %p\n", list);//list는 list[0]을 가르키는 포인터로 이 값을 출력한다
   printf("&list\t= %p\n\n", &list);//list는 list[0]을 가르키는 포인터이며 주소를 출력한다
   int i;//정수형 변수 i선언
   float tempsum = 0;//실수형 변수 tempsum 선언후 0으로 초기화
   for(i = 0;i < n;i++)
      tempsum += *(list +i);//n번 반복하며 tempsum에 list가 가리키는 값부터 list+(n-1)이 가리키는 값까지
      // 즉,list[0]의 값부터 list[n-1]의 값까지 더한값을 대입
   return tempsum;//tempsum으로 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) {   
   //실수형 함수 sum3은 정수형 변수 n 선언, 배열을 함수의 전달인자로 사용하기 위해 포인터 list를 매개변수로 선언
   printf("list\t= %p\n", list);//list는 list[0]을 가르키는 포인터로 이 값을 출력한다
   printf("&list\t= %p\n\n", &list);//list는 list[0]을 가르키는 포인터이며 주소를 출력한다
   int i;//정수형 변수 i선언
   float tempsum = 0;//실수형 변수 tempsum 선언후 0으로 초기화
   for(i = 0;i < n;i++)
      tempsum += *(list +i);//n번 반복하며 tempsum에 list가 가리키는 값부터 list+(n-1)이 가리키는 값까지
      // 즉,list[0]의 값부터 list[n-1]의 값까지 더한값을 대입
   return tempsum;//tempsum으로 반환
}