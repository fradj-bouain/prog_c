#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,posmax=0,posmin=0,max=0,min=0;
	int val[50];
		printf("entrez un taille de tableau svp!\n");
		scanf("%d",&n);
		
		
		for (i=0;i<n;i++)
		{
				printf("entrez le valeur d case %d svp! \n",i);
		scanf("%d",&val[i]);
		
			if( i==1 || val[i]>max)
			{
				max =val[i];
				posmax=i;
			}
			else if(i=1 || val[i]<min){
				
				
				min=val[i];
				posmin=i;
			}
		}
		printf("max est %d des pos %d\n min est %d des pos %d\n ",max,posmax,min,posmin);
	
	
}
