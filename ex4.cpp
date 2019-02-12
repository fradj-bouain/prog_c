#include<stdio.h>
#include<conio.h>
#include<string.h>
int compar (char c1,char c2)
{
	if (c1==c2)
	{
		return 0;
	}
	else {
		return 1;
	}
}
int compt(char*s,char c)
{
	int i,nocc=0;
	for (i=0;i<strlen(s);i++)
	{
		if (compar(s[i],c)==0)
		nocc++;
	}
	return nocc;
}
int main()
{
	char ch[10];
	char car;
	int res;
	scanf("%s",ch);
	scanf("%c",&car);
	res=compt(ch,car);
	printf("%d",res);
	getch();
}
