#include <stdio.h>
#define MAX_SIZE 100 // ��ũ�� ��� ����

float sum1(float list[], int);//�Լ� ���� ����, �Ǽ��� ������ �迭 list�Ű������� ����
float sum2(float *list, int);
float sum3(int n, float *list);
float input[MAX_SIZE], answer;//MAX_SIZEũ�⸦ ������ �Ǽ��� ������ �迭 input�� ����, �Ǽ��� ���� answer ����
int i;//������ �������� i ����

void main(void)
{
    printf("[----- [������] [2022041065] -----]\n");
   for(i=0; i < MAX_SIZE; i++)
      input[i] = i; //MAX_SIZE ũ�� ��ŭ (100) �ݺ��ϸ� �Ǽ��� ������ �迭 input�� 0���� 99���� ���� �����Ѵ�.
   /* for checking call by reference */
   printf("--------------------------------------\n");
   printf(" sum1(input, MAX_SIZE) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input�� input[0]�� ���� �ǹ̷� ���� �ּҸ� ����Ѵ�
   answer = sum1(input, MAX_SIZE);//answer�� sum1�Լ����� ����� �Ѱ��ش�. sum1�� �Լ��� input�� MAX_SIZE�� �Ű������� �޴´�
   printf("The sum is: %f\n\n", answer);//answer�� ���� ����Ѵ� 

   printf("--------------------------------------\n");
   printf(" sum2(input, MAX_SIZE) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input�� input[0]�� ���� �ǹ̷� ���� �ּҸ� ����Ѵ�
   answer = sum2(input, MAX_SIZE);//answer�� sum2�Լ����� ����� �Ѱ��ش�. sum2�� �Լ��� input�� MAX_SIZE�� �Ű������� �޴´�
   printf("The sum is: %f\n\n", answer);//answer�� ���� ����Ѵ�

   printf("--------------------------------------\n");
   printf(" sum3(MAX_SIZE, input) \n");
   printf("--------------------------------------\n");
   printf("input \t= %p\n", input);//input�� input[0]�� ���� �ǹ̷� ���� �ּҸ� ����Ѵ�
   answer = sum3(MAX_SIZE, input);//answer�� sum3�Լ����� ����� �Ѱ��ش�. sum3�� �Լ��� MAX_SIZE�� input�� �Ű������� �޴´�
   printf("The sum is: %f\n\n", answer);//answer�� ���� ����Ѵ�.
}

float sum1(float list[], int n) {//�Ǽ��� �Լ� sum1�� �Ǽ��� �������迭�� ������ n�� �Ű������� ������
   printf("list\t= %p\n", list);//list�� list[0]�� ����Ű�� �����ͷ� �� ���� ����Ѵ�
   printf("&list\t= %p\n\n", &list);//list�� list[0]�� ����Ű�� �������̸� �ּҸ� ����Ѵ�
   int i;//������ ���� i����
   float tempsum = 0;//�Ǽ��� ���� tempsum ������ 0���� �ʱ�ȭ

   for(i = 0;i < n;i++)
      tempsum += list[i];//n�� �ݺ��ϸ� tempsum�� list[0]�� ������ list[n-1]�� ������ ���Ѱ��� ����.
   return tempsum;//tempsum���� ��ȯ
}
//�迭�� �Լ��� ���� ���ڷ� ����Ϸ��� �迭�� �������� ù ��° ������ �ּҰ��̱� ������ �Ű������� Ÿ���� �����Ͱ� �Ǿ�� �Ѵ�.
float sum2(float *list, int n) {
   //�Ǽ��� �Լ� sum2�� �迭�� �Լ��� �������ڷ� ����ϱ� ���� ������ list�� �Ű������� ����, ������ ���� n ����
   printf("list\t= %p\n", list);//list�� list[0]�� ����Ű�� �����ͷ� �� ���� ����Ѵ�
   printf("&list\t= %p\n\n", &list);//list�� list[0]�� ����Ű�� �������̸� �ּҸ� ����Ѵ�
   int i;//������ ���� i����
   float tempsum = 0;//�Ǽ��� ���� tempsum ������ 0���� �ʱ�ȭ
   for(i = 0;i < n;i++)
      tempsum += *(list +i);//n�� �ݺ��ϸ� tempsum�� list�� ����Ű�� ������ list+(n-1)�� ����Ű�� ������
      // ��,list[0]�� ������ list[n-1]�� ������ ���Ѱ��� ����
   return tempsum;//tempsum���� ��ȯ
}

/* stack variable reuse test */
float sum3(int n, float *list) {   
   //�Ǽ��� �Լ� sum3�� ������ ���� n ����, �迭�� �Լ��� �������ڷ� ����ϱ� ���� ������ list�� �Ű������� ����
   printf("list\t= %p\n", list);//list�� list[0]�� ����Ű�� �����ͷ� �� ���� ����Ѵ�
   printf("&list\t= %p\n\n", &list);//list�� list[0]�� ����Ű�� �������̸� �ּҸ� ����Ѵ�
   int i;//������ ���� i����
   float tempsum = 0;//�Ǽ��� ���� tempsum ������ 0���� �ʱ�ȭ
   for(i = 0;i < n;i++)
      tempsum += *(list +i);//n�� �ݺ��ϸ� tempsum�� list�� ����Ű�� ������ list+(n-1)�� ����Ű�� ������
      // ��,list[0]�� ������ list[n-1]�� ������ ���Ѱ��� ����
   return tempsum;//tempsum���� ��ȯ
}