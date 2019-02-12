#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	char mot[100];
	char c[10];
	char d[10];
	printf("entrez un mote\n");
	scanf("%s",mot);
	
	for (i=1;i<(strlen(mot)/2);i++)
	{
		strncpy(mot,d,i);
		strncpy(mot,c,strlen(mot)-i+1);
		if (d!=c )
		{
			printf("c'est un mot palindrom");
		}
		else {
			printf("mot non palindrom");
		}
	
	}

	getch();
}
