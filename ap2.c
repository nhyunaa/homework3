#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [������] [2022041065] -----]\n");
    int list[5];//5���� ���Ҹ� ������ ������ ������ �迭 ����
    int *plist[5];//������ ���� 5���� �����ͺ������� �迭��ҷ� ���� �����͹迭 ���� 
    list[0] = 10;//������ �迭 list�� ù��° ���ҷ� 10����
    list[1] = 11;//������ �迭 list�� �ι�° ���ҷ� 11����
    plist[0] = (int*)malloc(sizeof(int));//plist[0]�� int ������ �����Ҵ��� �Ͽ� �޸𸮸� �Ҵ��Ų��
    printf("list[0] \t= %d\n", list[0]);//list[0]�� �� ���
    printf("list \t\t= %p\n", list);//list�� listp[0]�� ����Ű�� �����ͷ�, ����Ű�� ���� ����Ѵ�.
    printf("&list[0] \t= %p\n", &list[0]);//list[0]�� �ּҸ� ����Ѵ�
    printf("list + 0 \t= %p\n", list+0);//list+0�� list[0]�� ������ list�� ����Ű�� ���� ����Ѵ�. �޸𸮴� 4�� �����ϰԵȴ�. 
    printf("list + 1 \t= %p\n", list+1);//list+1�� list[1]�� ������ list+1�� ����Ű�� ���� ����Ѵ�
    printf("list + 2 \t= %p\n", list+2);//list+2�� list[2]�� ������ list+2�� ����Ű�� ���� ����Ѵ�
    printf("list + 3 \t= %p\n", list+3);//list+3�� list[3]�� ������ list+3�� ����Ű�� ���� ����Ѵ�
    printf("list + 4 \t= %p\n", list+4);//list+4�� list[4]�� ������ list+4�� ����Ű�� ���� ����Ѵ�
    printf("&list[4] \t= %p\n", &list[4]);//list[4]�� �ּҰ��� ����Ѵ�.
    free(plist[0]);//�����Ҵ��� ����
}