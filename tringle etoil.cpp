#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
				for (j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for (j=n;j>n-i;j--)
		{
		
			printf("*");
		}
			for (j=n;j>n-i;j--)
		{
		
			printf("*");
		}
		printf("\n");
		
	}
}
