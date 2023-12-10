#include "stdio.h"
#include "stdlib.h"
/*
消失的数字:如何在一个1到100的整数数组中找到丢失的数字?
*/
#if 0
/*
1.把从0到n的所有整数加在一起结果是sum1
2.把数组中的所有元素相加在一起结果是sum2
3.最后用sum1-sum2其结果就是缺失的那个数字
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
异或（^):相同为0，相异为1(指的是二进制位)。
1 .把数组中的元素全部异或在一起 :
tmp= nums[0] ^ nums[1] ^ … ^ nums[numsSize-1]
2.用tmp异或从0到n的所有整数，其结果就是缺失的那个数字
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