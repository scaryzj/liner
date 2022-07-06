#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

#define max 12
//预设一个结构体，存下一组随机数
struct SqList {

	int data[max] = { 3,2,1,5,2,0,1,3,1,4 };
	int length = 10;
};
//找顺序表中的最小值，并返回
int seekmin(SqList L,int &p,int &q) 
{
	int k= L.data[0];//设置首元素作为擂主，让后续其他元素与其PK，小于它的人站在擂台上
	for (int i = 1; i < L.length; i++)//遍历顺序表
	{
		if (k >= L.data[i])//PK
		{
			k = L.data[i];//站擂台
			q = i;//记下最小值的位序
		}
	}
	p=k;//返回最小值
	return p, q;
}

int main()
{	
	int min,pos;
	SqList L;
	if (L.length == 0) return false;
	printf("初始顺序表为:\n");
	for (int i = 0; i < L.length; i++) 
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");
	seekmin(L,min,pos);
	printf("找到的最小值是:\n");
	printf("%3d\n", min);
	L.data[pos] = L.data[L.length - 1];//将最后一个元素填补最小值位置
	printf("变化后的顺序表为:\n");
	for (int i = 0; i < L.length; i++)
	{
		printf("%3d", L.data[i]);
	}
	printf("\n");

	return 0;
}
