#include <stdio.h>
#include <stdlib.h>

void main()
{
   printf("[----- [������] [2022041065] -----]\n");

   int list[5]; //5���� ���Ҹ� ������ ������ ������ �迭 list ����
   int *plist[5] = {NULL,};// ������ ���� 5���� �����ͺ������� �迭��ҷ� ���� �����͹迭 ���� �� �ʱ�ȭ

   plist[0] = (int *)malloc(sizeof(int));//�����޸��Ҵ�, int*������ int�� ũ�⸸ŭ �޸𸮸� �������� �Ҵ�޾� plist[0]�� ���
   list[0] = 1;//list[0]�� 1�� �����Ѵ�
   list[1] = 100;//list[1]�� 100�� �����Ѵ�
   *plist[0] = 200;//������ �迭 plist[0]�� ����Ű�� ���� 200����

   printf("list[0] = %d\n", list[0]);//list[0]�� ���� ���
   printf("&list[0] = %p\n", &list[0]);//list[0]�� �ּҰ��� 16������ ���
   printf("list = %p\n", list);//list�� list[0]�� ���� �ǹ̷� �̸� 16������ ���
   printf("&list = %p\n", &list);//list�� list[0]�� ���� �ǹ�, list�� �ּҸ� 16������ ���
   printf("----------------------------------------\n\n");

   printf("list[1] = %d\n", list[1]);//list[1]�� �� ���
   printf("&list[1] = %p\n", &list[1]);//list[1]�� �ּҰ��� 16������ ���
   printf("*(list+1) = %d\n", *(list + 1));//������ list+1 ������ �Ѱ��� ���������� ���(=list[1])
   printf("list+1 = %p\n", list+1);//list+1�� 16������ ��� (=&list[1])
   printf("----------------------------------------\n\n");

   printf("*plist[0] = %d\n", *plist[0]);//�����͹迭 plist[0]�� ����Ű�� ���� ������ �Ͽ� ���������� ���
   printf("&plist[0] = %p\n", &plist[0]);//�����͹迭 plist[0]�� �ּҰ��� 16������ ���
   printf("&plist = %p\n", &plist);//�����͹迭 ���� plist�� plist[0]�� ���⿡ &plist�� &plist[0]�� �������� ��µȴ�->16�������
   printf("plist = %p\n", plist);//�����͹迭 ���� plist�� plist[0]�� ���� plist[0]�� �ּҰ��� ���� ���� ���´�.->16�������
//16���� ���
   printf("plist[0] = %p\n", plist[0]);//plist[0]�� �� ���
   printf("plist[1] = %p\n", plist[1]);//plist[1]�� NULL������ �ʱ�ȭ �Ǿ������� �̸� ���
   printf("plist[2] = %p\n", plist[2]);//plist[2]�� NULL������ �ʱ�ȭ �Ǿ������� �̸� ���
   printf("plist[3] = %p\n", plist[3]);//plist[3]�� NULL������ �ʱ�ȭ �Ǿ������� �̸� ���
   printf("plist[4] = %p\n", plist[4]);//plist[4]�� NULL������ �ʱ�ȭ �Ǿ������� �̸� ���

   free(plist[0]);//�����Ҵ� �޸� ����
}