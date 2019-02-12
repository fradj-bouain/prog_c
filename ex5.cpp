#include<stdio.h>
#include<conio.h>
#include<string.h>

char ajoute(char*c1,char*c2)
{
	int i,j;
	char res[50];
	for(j=strlen(c1);j<(strlen(c1)+strlen(c2));j++)
	{
	
	for(i=0;i<strlen(c2);i++)
	{
		c1[j]=c2[i];
	}
	res[j]=c1[j];
 return res[];
}

}
int main()
{
	char ch1[10];
	char ch2[10];
	char ch3[50];
	gets(ch1);
	gets(ch2);
	
	ch3=ajoute(ch1,ch2);
	gets(ch3);
	getch;
}
