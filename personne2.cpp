#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 struct date{
int  jj ; 
int  mm ; 
int  aa;
};
struct personne{
	char  nom[10] ; 
char  prenom[10] ; 
struct date  dateN;
char sexe[10] ;
};

struct personne saisie()
{
	
struct personne p;

    
	
	fflush(stdin);
    gets(p.nom);
    fflush(stdin);
    gets(p.prenom);
    printf("donne le date ");
    scanf("%i%i%i",&p.dateN.jj,&p.dateN.mm,&p.dateN.aa);
    do{
    	fflush(stdin);
    	scanf("%s",&p.sexe);
    	
	}
	
	while (toupper(p.sexe)!='M' && toupper(p.sexe)!='F');
	return p;
	
}

void affiche(struct personne p)
{
	if(p.sexe== 'M')
	{printf("nom=%s/ prenom=%s /dateN=%i/%i/%i est masculin ",p.nom,p.prenom,p.dateN.jj,p.dateN.mm,p.dateN.aa,p.sexe);
	}
}




int main() {
	int i;
struct personne tp[4];
for (i=0;i<4;i++)
{

tp[i]= saisie();
affiche(tp[i]);

}

getch();



}
