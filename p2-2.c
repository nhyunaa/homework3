#include <stdio.h>
void print_one(int *ptr, int rows);// void�Լ� print_one�Լ� ���� ����
int main()
{
    printf("[----- [������] [2022041065] -----]\n");
   int one[] = {0, 1, 2, 3, 4};//������ ������ �迭 one ���� �� �ʱ�ȭ
   printf("one = %p\n", one);//one�� one[0]�� ����Ű�� �����ͷ� �� ���� ����Ѵ�
   printf("&one = %p\n", &one);//one�� one[0]�� ����Ű�� �����ͷ� �� �ּҸ� ����Ѵ�
   printf("&one[0] = %p\n", &one[0]);//one[0]�� �ּҸ� ����Ѵ�
   printf("\n");
   printf("------------------------------------\n");
   printf(" print_one(&one[0], 5) \n");
   printf("------------------------------------\n");
   print_one(&one[0], 5);//print_one�Լ� ȣ��
   printf("------------------------------------\n");
   printf(" print_one(one, 5) \n");
   printf("------------------------------------\n");
   print_one(one, 5);//print_one�Լ� ȣ��

   return 0;
}

void print_one(int *ptr, int rows)
//void�Լ� print_one�� �迭�� �Լ��� �������ڷ� ����ϱ� ���� ������ ptr�� �Ű������� ����,������ rows�Ű��������� 
{/* print out a one-dimensional array using a pointer */
   int i;//������ ���� i����
   printf ("Address \t Contents\n");
   for (i = 0; i < rows; i++)
      printf("%p \t %5d\n", ptr + i, *(ptr + i));//rows�� �ݺ��ϸ� ptr���� ptr+(rows-1)���� �� �ּҸ� ����ϰ� 
      //ptr���� ptr+(rows-1)�� ����Ű�� ���� ���
   printf("\n");
}