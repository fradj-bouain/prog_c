#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,l=0,n,aux;
	int val[50];
	do{
		printf("entrez le taille des tableau");
		scanf("%d",&n);
		
	}
	while(n<2||n>30);
	 for (i=0;i<n;i++)
	 {
	 	printf("entrez le %d valeur svp!\n ",i);
	 	scanf("%d",&val);
	 }
	 
	 for (i=0;i<n;i++)
	 {
	 	for(j=i;j<n;j++)
	 	{
	 		if(val[i]<val[j])
	 		
	 	{
	 		aux=val[j];
	 		val[j]=val[i];
	 		val[i]=aux;
	 		
		 }
		 
		 }
		 
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	
	 	printf("les valeur se sera %d \n %d \n",i,val[i]);
	 }
}
