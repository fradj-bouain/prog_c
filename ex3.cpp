#include<stdio.h>
#include<conio.h>
int saisie ()

{
	int n;
	
do{
 
		scanf("%d",&n);


}
while (n<5 || n>35);	

 return n;



}
void remplissage(int n, int t[])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("t[%i]",i);
		scanf("%i",&t[i]);
	}
}
void impair (int n , int t[])
{
 int i;
 for (i=0;i<n;i++)
 {
 	if ((t[i]%2)!=0)
 	{
 		printf("%i est impair ! ",t[i]);
	 }
	 }	
}
 
void negative (int n , int t[])
{
 int i;
 for (i=0;i<n;i++)
 {
 	if (t[i]<0)
 	{
 		printf("%i est negativ ! ",t[i]);
	 }
	 }	
}
 
 void premier (int n , int t[])
{
 int i,j;
 for (i=0;i<n;i++)
 {
 	for (j=0;j<=t[i];j++)
 	{
 		if (t[i]%j==0)
 		{
 			printf("%i est nbr premier ! ",t[i]);
 			
		 }
		 
	 }
 	{
 		printf("%i est nbr premier ! ",t[i]);
	 }
	 }	
}
 
int main()
{
	int n,t[35];
	n=saisie();
	remplissage(n,t);
	impair(n,t);
	negative(n,t);
	premier(n,t);
	getch();
}
