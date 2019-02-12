#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct equipe {
	char nom[10];
	int victoir;
	int nul;
	int defait;
	int points;
};

struct equipe saisie()
{
		printf("entre  le nom equipe\n");
	struct equipe eq;
	scanf("%c",&eq.nom);
	fflush(stdin);
		printf("entre les vict equipe\n");
  	scanf("%i",&eq.victoir);
  	fflush(stdin);
  		printf("entre les null equipe\n");
	scanf("%i",&eq.nul);
fflush(stdin);
	printf("entre les defait equipe\n");
	scanf("%i",&eq.defait);
	fflush(stdin);
	eq.points =eq.victoir*3+eq.nul;
		printf("les points equipe\n");
	printf("%i",&eq.points);
	fflush(stdin);
	return(eq);
}




int gagne(struct equipe eq)
{   
    int j;
	int max=0;

	struct equipe tab[10];
	for (j=0;j<3;j++)
	{
		
		if (j==0 || eq.points<max  )
		{
			max=eq.points;
			if (j==2){
				return max;
			}
			
		}
		
	}
	
}

 void affiche (struct equipe eq , int max)
{    struct equipe tab[10];
	
	int i;
	for (i=0;i<3;i++)
	{
		if (eq.points==max)
		{
			printf (eq.nom,eq.victoir,eq.nul,eq.defait);
		}
	}
	
}
int main()
{
	int s;
	
	struct equipe tab[10];
	
	struct equipe eq;
	int i;
	int j;
	
	printf("entre les equipe\n");
	for (i=0;i<3;i++){
	
	saisie();
}



	for (j=0;j<3;j++){
	
 s=	gagne(struct equipe );

	
	affiche(struct equipe eq,int max);
	getch();

s}
}
