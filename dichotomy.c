#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define uint unsigned int


int main()
{ 
	float c[] = { 11.1 ,21.2 ,54.3 ,67.5 ,88.6 ,101.8 ,256.8 };

	float x = 67.4;//需要检测的值

	int head = 0;//开头

	int middle = 0;//中值

	int tail = sizeof(c) / sizeof(c[0]) - 1;//数组含有的元素个数。尾部。

	

	if (x<(c[head]) || x>(c[tail]))//大于尾，小于头则代表 x不存在于数组内
	{
		printf("this number is not exist in the arry\n");
	}
	else if (x == (c[head]))
	{
		printf("this number is exist in the c[0]\n");
	}
	else if (x == (c[tail]))
	{
		printf("this number is exist in the c[%d]\n",tail);
	}
	else
	{
		middle = tail / 2;//取中间值

		while (1)
		{
		

			if (x == (c[middle])) //检测x存在
			{
				printf("this number is exist in the c[%d]\n", middle);
				break;
			}
			else if (x > (c[middle]))//如果x大于中间那么 头移动到中间，中间从新定位。
			{
				head = middle;

				middle = (head + tail)/2;
				
			}
			else//如果x小于中间那么 尾移动到中间，中间从新定位。
			{
				tail = middle;

				middle = (head + tail) / 2;
			}

			if (tail == middle)//如果tail的值和middle经过运算的值一样那么表示数组中没有这个值。
			{
				printf("this number is not exist in the arry\n");
				break;
			}

		}
	

	}


	return 0;
}




