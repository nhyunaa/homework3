#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [노현아] [2022041065] -----]\n");
    int list[5];//5개의 원소를 가지는 정수형 일차원 배열 선언
    int *plist[5];//정수에 대한 5개의 포인터변수들을 배열요소로 갖는 포인터배열 선언 
    list[0] = 10;//일차원 배열 list의 첫번째 원소로 10대입
    list[1] = 11;//일차원 배열 list의 두번째 원소로 11대입
    plist[0] = (int*)malloc(sizeof(int));//plist[0]을 int 형으로 동적할당을 하여 메모리를 할당시킨다
    printf("list[0] \t= %d\n", list[0]);//list[0]의 값 출력
    printf("list \t\t= %p\n", list);//list는 listp[0]을 가리키는 포인터로, 가리키는 값을 출력한다.
    printf("&list[0] \t= %p\n", &list[0]);//list[0]의 주소를 출력한다
    printf("list + 0 \t= %p\n", list+0);//list+0은 list[0]과 같으며 list가 가리키는 값을 출력한다. 메모리는 4씩 증가하게된다. 
    printf("list + 1 \t= %p\n", list+1);//list+1은 list[1]과 같으며 list+1이 가리키는 값을 출력한다
    printf("list + 2 \t= %p\n", list+2);//list+2은 list[2]와 같으며 list+2이 가리키는 값을 출력한다
    printf("list + 3 \t= %p\n", list+3);//list+3은 list[3]과 같으며 list+3이 가리키는 값을 출력한다
    printf("list + 4 \t= %p\n", list+4);//list+4은 list[4]와 같으며 list+4가 가리키는 값을 출력한다
    printf("&list[4] \t= %p\n", &list[4]);//list[4]의 주소값을 출력한다.
    free(plist[0]);//동적할당을 해제
}