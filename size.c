#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [������] [2022041065] -----]\n");
   int **x;//������ ���������� x����
   printf("sizeof(x) = %lu\n", sizeof(x));//x�� ũ�⸦ ��ȣ�� ���� 10���� ������ ���
   printf("sizeof(*x) = %lu\n", sizeof(*x));//x�� ����Ű�� ���� ũ�⸦ ��ȣ�� ���� 10���� ������ ���
   printf("sizeof(**x) = %lu\n", sizeof(**x));//*x�� ����Ű�� ���� ũ�⸦ ��ȣ�� ���� 10���� ������ ���
}