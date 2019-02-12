#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char rep;
struct date{
	int jj;
	int mm;
	int aa;
};
struct date  ;
struct employe {
	int cin;
	char nom[50];
	char prenom[50];
	char adr[50];
	date dateN;
	char sexe; //'M' ou 'F' 
	int salaire;

};
	struct employe TE[200];
	int n=0;
	void ajout();
	void supprimer();
	void modifier();
	void recher();
	void affichEmp();
	void quitter();
	
void menu(){
	struct employe e;
	int choix;
	int n;
	printf(" \t \t _____________________________Gestion des Employees _________________________________________________\n");
	printf("\t | 1 | Ajout  Employe \n");
	printf("\t | 2 | Supprission Employe \n") ;
	printf("\t | 3 | Modification  Employe \n");
	printf("\t | 4 | recherche Employe \n");
	printf("\t | 5 | Afficher Employe \n");
	printf("\t | 6 | Quitter  \n");
	printf("Choissiez un numero entre 1 et 6 \n");
    scanf("%d", &choix);
    if(choix==1) return ajout();
    else if (choix==2) return supprimer();
    else if(choix==3) return modifier();
    else if(choix==4) return recher();
    else if(choix==5) return affichEmp();
    else return quitter();
}
	struct employe e;
/******************Verifier cin existe ou non *******************/
int verifcin(int a) {
	for (int i=0;i<n;i++) { 
		if  ( a ==TE[i].cin ) {
		return 1 ;
		}
	}
		return 0 ; 
}
void ajout(){
		system("cls");
		printf("______________________________Ajouter un Employe_____________________________________________ \n \n");

		fflush(stdin);
		do {
        puts("Donner CIN d'un employe  : ");	
 	    scanf("%d" , &TE[n].cin);
 		}while (verifcin(TE[n].cin) ==1);
		fflush(stdin);
        puts("Donner le nom d'un employe  : ");	
 	    scanf("%s" , &TE[n].nom);
 	    fflush(stdin);
 	    puts("Donner le prenom d'un employe  : ");
 	    scanf("%s" , &TE[n].prenom);
 	    fflush(stdin);
 	    puts("Donner l'adresse d'un employe : ");
 	    scanf("%s" , &TE[n].adr);
 	    fflush(stdin);
		printf("Donner date de Naissance jj/mm/aaaa : \n ");
		fflush(stdin);
		scanf("%d ", &TE[n].dateN.jj);
		scanf("%d ", &TE[n].dateN.mm);
		scanf("%d ", &TE[n].dateN.aa);
		fflush(stdin);
			do {
				printf("Donner Sexe : ");
				fflush(stdin);
				scanf("%s",&TE[n].sexe);
			}while(toupper(TE[n].sexe)!='M' && toupper(TE[n].sexe)!= 'F');
		fflush(stdin);
	    puts("Donner la Salaraire  : ");
 		scanf("%d",&TE[n].salaire);
 				fflush(stdin);
	n++;
	do{
	printf("Voullez-Vous ajouter autre employe (O/N) ");
	scanf("%c", &rep);
	}while (toupper(rep)!='O' && toupper(rep)!='N');
	if(toupper(rep)=='O'){
		ajout();
	}
	else {
 	menu();
	 }
	 getch();	
}

void supprimer(){

		printf("__________________________________________Supprimer Employe__________________________________ \n \n");
		int i,pos=-1;
		int cin; ;
		printf("Donner le cin d'employe : \n");
		scanf("%d", &cin);
		i=0;
	while (i<n && TE[i].cin !=cin){
		i++;
	}
	if(i<n){
		for(i;i<n;i++)
		TE[i]=TE[i+1];
		n--;
		printf("employe supprime!");
	}
	else{
		printf("Employe n'existe pas");
	}
	menu();
}
void modifier(){
		printf("__________________________Modifier un Employe_____________________________________ \n \n");
			int i,pos=-1;
		int cin; ;
		printf("Donner le cin d'employe : \n");
		scanf("%d", &cin);
		i=0;
		while (i<n && TE[i].cin !=cin){
		i++;
	}
	if(i<n){
			fflush(stdin);
        puts("Donner le nom d'un employe  : \n");	
 	    scanf("%s" , &TE[i].nom);
 	    fflush(stdin);
 	    puts("Donner le prenom d'un employe  : \n");
 	    scanf("%s" , &TE[i].prenom);
 	    fflush(stdin);
 	    puts("Donner l'adresse d'un employe : \n");
 	    scanf("%s" , &TE[i].adr);
 	    fflush(stdin);
		printf("Donner date de Naissance jj/mm/aaaa : \n ");
		scanf("%d %d %d", &TE[i].dateN.jj,&TE[i].dateN.mm,&TE[i].dateN.aa);
			do {
				printf("Donner Sexe : \n");
				fflush(stdin);
				scanf("%s",&TE[i].sexe);
			}while(toupper(TE[i].sexe)!='M' && toupper(TE[i].sexe)!= 'F');
		fflush(stdin);
	    puts("Donner la Salaraire  : \n");
 		scanf("%d",&TE[i].salaire);
 				fflush(stdin);	
	}	
	else {
		printf ("Employe n'existe pas");
	}
}
void recher(){
		printf("_________________________________________Recherche un Employe _______________________________________________\n \n");
		int i,pos=-1;
		int cin; ;
		printf("Donner le cin d'employe : \n");
		scanf("%d", &cin);
		i=0;
		while (i<n && TE[i].cin !=cin){
		i++;
	}
	if(i<n){
		printf("L'employe de CIN %d : ", TE[i].cin);
		printf("\n ----------------------------------------------------------------------------------------------------------\n");
		printf("|     Nom   |     Prenom    |   Adresse   |   Date de Naissance   |   Sexe   |   Salare   | \n");
		printf("|    %s     |       %s      |     %s      |      %d/%d/%d         |     %c   |    %d      | \n" , 
		TE[i].nom , TE[i].prenom , TE[i].adr ,  TE[i].dateN.jj , TE[i].dateN.mm , TE[i].dateN.aa, TE[i].sexe ,TE[i].salaire  );
		printf("-----------------------------------------------------------------------------------------------------------\n");
	}
	else {
		printf ("Employe n'existe pas");
	}
	
	getchar();
	menu();
}
void affichEmp(){
		printf("______________________________Affichier Tous les Employees____________________________________________ \n \n");
	for(int i=0;i<n;i++)
	{
		printf("Employe  : \n ");  
		printf("CIN : %d ",TE[i].cin);
		printf("\n Nom : %s ", TE[i].nom);
		printf("\n Prenom : %s ", TE[i].prenom);	
		printf("\n Adresse : %s ", TE[i].adr);
		printf("\n Sexe : %c ", TE[i].sexe);	
		printf("\n Salaire : %d ", TE[i].salaire);
		printf("\n Date de naissance : %d/%d/%d \n" ,  TE[i].dateN.jj,TE[i].dateN.mm,TE[i].dateN.aa);

	}
	menu();
}
void quitter(){
		printf("******************************Quitter************************************************* \n \n");
}
int main(){
	int n;
	struct employe TE [n];
	menu();

	getchar();   	
}

