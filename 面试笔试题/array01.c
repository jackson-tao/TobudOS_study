#include "stdio.h"
#include "stdlib.h"
/*
��ʧ������:�����һ��1��100�������������ҵ���ʧ������?
*/
#if 0
/*
1.�Ѵ�0��n��������������һ������sum1
2.�������е�����Ԫ�������һ������sum2
3.�����sum1-sum2��������ȱʧ���Ǹ�����
*/
int FindNum(int *p,int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;
	for (i = 0;i <= size;i++)
	{
		sum1 += i;
		
	}
	for (i = 0;i < size;i++)
		sum2+=p[i];
	
	return sum1 - sum2;
}
#else
/*
���^):��ͬΪ0������Ϊ1(ָ���Ƕ�����λ)��
1 .�������е�Ԫ��ȫ�������һ�� :
tmp= nums[0] ^ nums[1] ^ �� ^ nums[numsSize-1]
2.��tmp����0��n��������������������ȱʧ���Ǹ�����
*/
int FindNum(int *p,int size)
{
	int i = 0;
	int tmp = 0;
	for (i = 0;i < size;i++)
	{
		tmp ^= p[i];
	}
	for (i = 0;i <= size;i++)
	{
		tmp ^= i;
	}
	return tmp;
}
#endif
int main(void)
{
	//int array[6] = {1,2,3,4,5,6};
	int array1[6] = {1,2,3,5,6,0};
	int len = sizeof(array1) / sizeof(array1[0]);
	int ret = FindNum(array1,len);
	printf("miss num %d\n",ret);
	return 0;
}