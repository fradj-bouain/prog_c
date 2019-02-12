#include<stdio.h>
#include<conio.h>
float moyenne(float a, float b, float c)
{
	float s;
	
	s=(a+b+c)/3;

 return s;
}
int main()

{
	float res , a,b,c;
	printf("entres les trois valeurs \n");
	scanf("%f%f%f",&a,&b,&c);
	res = moyenne(a,b,c);
	 printf("moyenne est %f",res);
	getch();
}
