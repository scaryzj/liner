#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

#define max 12
//Ԥ��һ���ṹ�壬����һ�������
struct SqList {

	int data[max] = { 3,2,1,5,2,0,1,3,1,4 };
	int length = 10;
};
//��˳����е���Сֵ������"e"����
int seekmin(SqList L,int &p,int &q) 
{
	int k= L.data[0];//������Ԫ����Ϊ�������ú�������Ԫ������PK��С��������վ����̨��
	for (int i = 1; i < L.length; i++)//����˳���
	{
		if (k >= L.data[i])//PK
		{
			k = L.data[i];//վ��̨
			q = i;//������Сֵ��λ��
		}
	}
	p=k;//������Сֵ
	return p, q;
}

int main()
{	
	int min,pos;
	SqList L;
	if (L.length == 0) return false;
	printf("��ʼ˳���Ϊ:\n");
	for (int i = 0; i < L.length; i++) 
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");
	seekmin(L,min,pos);
	printf("�ҵ�����Сֵ��:\n");
	printf("%3d\n", min);
	L.data[pos] = L.data[L.length - 1];//�����һ��Ԫ�����Сֵλ��
	printf("�仯���˳���Ϊ:\n");
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");

	return 0;
}