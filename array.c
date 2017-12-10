/*
	函数功能：实现输入的逆序排列
*/

/*#include <stdio.h>
#include <string.h>
int main ()
{
	int i = 0;
	int  a[3];
	printf("please enter a:\n");
	for(i = 0;i < 3; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("-------------------\n");
	for(i = 2;i>=0;i--)
	{
		printf("%d",a[i]);	
	}
	printf("\n");
	return 0;
}*/
#include <stdio.h>
int main ()
{
	int j;
	for(j<10;j>3;j--)
	{
		if(j%3)
		{
			j--;
			--j;
			--j;
			printf("%d.\n",j);
		}
	}
	return 0;
}
