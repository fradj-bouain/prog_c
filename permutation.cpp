#include<stdio.h>
#include<conio.h>
#include<string.h>
 struct personne{
 	char nom[10];
    char prenom [10];
    int cin;
    
 };
 void permut(struct personne p1,struct personne p2)
 {
 	
 	struct personne p3;
 	strcpy(p3.nom,p1.nom);
 	strcpy(p1.nom,p2.nom);
 	strcpy(p2.nom,p3.nom);
 	
 	strcpy(p3.prenom,p1.prenom);
 	strcpy(p1.prenom,p2.prenom);
 	strcpy(p2.prenom,p3.prenom);
 	
 	p3.cin=p1.cin;
 	p1.cin=p2.cin;
 	p2.cin=p3.cin;
 	
 	
 }
 
 struct personne  saisie()
{
	struct personne  p;
	printf("donner les corrdonnee du personne \n");
	scanf("%s%s%d",&p.nom,&p.prenom,&p.cin);
	

	return p;
}

void  affiche(struct personne pp)
{
	printf ("le coord de personne sont:\n nom=%s\n ,prenom=%s \n, cin=%d\n",pp.nom,pp.prenom,pp.cin);
}
 
 int main()
 {
 
 char nom[10];
 	struct personne p1,p2;
 	p1=saisie();
 	p2=saisie();
 permut(p1,p2);
 nom[10]='ahmed';
 
 if (p1.nom==nom)
  {
  affiche(p1);
  affiche(p2);
}
 getch();
 	 
 	 
 }
