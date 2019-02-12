#include<stdio.h>
#include<conio.h>
float max(float a,float b)
{
	
	if (a >b)
	{
		
		return a;
	}
	else {
		return b;
	}
}
float min(float c,float d)
{
	
	if (c<d)
	{
		
		return c;
	}
	else {
		return d;
	}
}
int main()
{
	float a,b,c,d;
	printf("donner 4 reel");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf ("le min est :%f et le max est %f",min(min(a,b),min(c,d)) , max(max(a,b),max(c,d)));
	getch();
}
