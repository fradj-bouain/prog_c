#include<stdio.h>
#include<conio.h>
#include<string.h>
struct equipe{
	char nom_equipe;
	int victoires;
	int nuls;
	int defaites;
	int points;
};


void saisie(){
	struct equipe eq;
	printf("donner le coordonner de votre equipe\n");
	scanf ("%c",&eq.nom_equipe);
	printf("donner le coordonner de votre victoirs\n");
    scanf ("%i",&eq.victoires);
    printf("donner le coordonner de votre nuls\n");
     scanf ("%i",&eq.nuls);
     printf("donner le coordonner de votre defaites\n");
	 scanf ("%i",&eq.defaites);
	 printf("donner le coordonner de votre points\n");
	  scanf ("%i",&eq.points);
	  	
}

void calcul_point(struct equipe eq )
{
	struct equipe eq;
	int i;
	for (i=0;i<10;i++)
	{
		if(eq.victoires>0)
		eq.points=3*eq.victoires;
	}
	
	else if(eq.nuls>0)
	while(eq.defaites<0)
	{
		eq.points=1+eq.points;
		eq.nuls--;
	}
	
	
}

int affiche(struct equipe eq){
	printf (les classement);
	for (i=0;i<10;i++)
	{
		if (eq.points<eq.points[i+1])
		{
			
		}
	}
}
int main()
{
	struct equipe eq;
	
	for (i=0;i<10;i++){
	
	saisie();
}
 calcul_point(struct equipe eq)  ;
 
 res=affiche(struct equipe eq);
}
