#include<stdio.h>
#include<conio.h>
#include<string.h>

struct menu saisie(struct menu M);
void Menu(struct menu tab[] , struct menu M , int max);
void Ajouter(struct menu tab[] , struct menu M , int max);

void Rechercher_nom(struct menu tab[] , int max , struct menu M);
void Rechercher_auteur(struct menu tab[] , int max , struct menu M);
void Rechercher_matrecule(struct menu tab[] , int max , struct menu M);




		 // **************************************   les structures   ******************************//

struct dat{
	int jj;
	int mm;
	int yy;
};

struct menu{
	char nom[10];
	struct dat date;
	int matrecule;
	char auteur[10];
	
};





 



           // **************************************     Menu      ********************************//

void Menu(struct menu tab[] , struct menu M , int max)
{            printf("\n********************BIENVENUE DANS NOTRE BIBLIOTEQUE****************************     \n\n\n");

int choix;	
int rech;


	printf("\n    Appuiyer sur '1' pour Ajouter un ou plusieurs livres  \n");
	printf("\n    Appuiyer sur '2' pour Affiche tous les livres est trouvable\n");
	printf("\n    Appuiyer sur '3' pour Rechercher un livre\n");
	printf("\n    Appuiyer sur '4' pour Modifier un livre\n");
	printf("\n    Appuiyer sur '5' pour Supprimer un ou plusieurs livres\n");	
    printf("\n    Appuiyer sur '6' pour Quitter le programme\n");
    
    
   
            printf("\n********************************************************************************     \n\n\n");

printf("je suis en attend pour entre votre choix , Merci !\n");

do{  scanf("%i",&choix); if (choix<1||choix>6){ printf("valeur non correct respecter les donner svp !\n\n");  } }
while (choix<1 || choix>6);

if (choix ==1){}

switch(choix)
{

case 1 :Ajouter(tab, M , max);        
break;

case 2 :  	
	Rechercher_nom(tab,max,M);      
break;

case 3 : 
       printf("\nchoisir le choix de recherch , svp !\n\n"); 
       printf("\n    Appuiyer sur '1' pour rechercher par nom \n");
       printf("\n    Appuiyer sur '2' pour rechercher par matrecule \n");
       printf("\n    Appuiyer sur '3' pour rechercher par nom de l'auteur' \n\n");
                     printf("je suis en attend pour entre votre choix de recherche , Merci !\n");

                        do{  scanf("%i",&rech); if (rech<1||rech>3){ printf("valeur non correct respecter les donner svp !\n\n"); }  }
                        while (rech<1 || rech>3);

                     if(rech==1){ Rechercher_nom(tab , max , M);}
                     else if (rech==2){ Rechercher_matrecule(tab , max , M);}
                     else if (rech==3){ Rechercher_auteur(tab , max , M);}
                           
break;

case 4 : 
break;

case 5 : 
break;

case 6 : 
break;

default : break;

}



}

         
		 



        // **********************************************   fonction Ajouter   ********************************* //

struct menu saisie(struct menu M)
{
	
	
	

	printf("entre les coordonner suivant de livre  pour ajouter  svp!\n");
	
	
	printf("\n1-entrez le titter de livre:\n");
	scanf("%s",&M.nom);
	fflush(stdin);
	printf("\n2-entrez le date d'ajoute:\n");
	printf("le jour:");
	scanf("%i",&M.date.jj);
	fflush(stdin);
	printf("le moin:");
	scanf("%i",&M.date.mm);
	fflush(stdin);
	printf("le year:");
	scanf("%i",&M.date.yy);
	fflush(stdin);
	printf("\n3-entrez le matrecule de livre:\n ");
	scanf("%i",&M.matrecule);
	fflush(stdin);
	printf("\n4-entrez le nom de l'auteur du livre:\n");
	scanf("%s",&M.auteur);
	fflush(stdin);
	
	return(M);
		
}


void Ajouter( struct menu tab[], struct menu M,int max )
{
int i;
                    	printf("       ********  le fonction ajouter bienvenue *********\n\n\n");

 printf("donner le taill de tableau");
scanf("%i",&max);
	for (i=0;i<=max;i++){
		printf("\nlivre : %i\n\n",i);
	
	tab[i]=saisie(M);
}

	printf("       ********  merci pour utiliser le fonction ajouter  *********\n\n\n");
	


	Menu(tab, M , max);
	
}







       //  *********************************************  fonction Afficher tous les livres  *********************************  //








   //  *********************************************  fonction Rechercher  *********************************  //

void Rechercher_nom(struct menu tab[],int max,struct menu M)
{

	int i;
	int j=0;
	char nomrech[10];
	
	                 printf("\n         ********  le fonction Rechercher bienvenue *********\n\n");
	                 
	     printf("\n\n entrez le nom de livre qui veut trouver svp!\n");
	   scanf("%s",&nomrech);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (strcmp(tab[i].nom,nomrech)==0  ){
		
		j=j+1;
		printf("le livre est:\n %s\n",tab[i].nom);
	printf("la date d'ajouter:\n %i/%i/%i",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
				printf("le matrecule:\n %i\n",tab[i].matrecule);
					printf("l'auteur:\n %s\n",tab[i].auteur);
	}
	
		   else
		   {
		   	if(j==0 && i==max){
			   
	   
	   printf("\ncette livre n'est pas trouver\n");
}
}

	   }

 printf("\n     ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");	   

 Menu(tab , M , max);
}


void Rechercher_auteur(struct menu tab[],int max,struct menu M)
{

	int i;
	char auteurrech[10];
	
	                 printf("\n      ********  le fonction Rechercher bienvenue  *********\n\n");
	                 
	     printf("\n\n entrez le nom de l'auteur de livre qui veut trouver svp!\n");
	   scanf("%s",&auteurrech);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].auteur==auteurrech && i==max){
		printf("le livre est:\n %s",tab[i].nom);
			printf("lla date d'ajouter:\n %s",tab[i].date);
				printf("le matrecule:\n %s",tab[i].matrecule);
					printf("l'auteur:\n %s",tab[i].auteur);
	}
	
		   else{
	   
	   printf("\ncette livre n'est pas trouver\n");
}

	   }

	    printf("\n     ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");

 Menu(tab , M , max);

}


void Rechercher_matrecule(struct menu tab[],int max,struct menu M)
{

	int i;
	int matreculerech;
	
	                 printf("\n       ********  le fonction Rechercher bienvenue  *********\n\n");
	                 
	     printf("\n\n entrez le matrecule de livre qui veut trouver svp!\n");
	   scanf("%s",&matreculerech);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule==matreculerech && i==max){
		printf("le livre est:\n %s",tab[i].nom);
			printf("lla date d'ajouter:\n %s",tab[i].date);
				printf("le matrecule:\n %s",tab[i].matrecule);
					printf("l'auteur:\n %s",tab[i].auteur);
	}
	
		   else{
	   
	   printf("\ncette livre n'est pas trouver\n");
}

	   }

	    printf("\n        ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");


 Menu(tab , M , max);

}







 

   //  *********************************************  fonction Modifier   *********************************  //






   //  *****************************************  fonction Supprimer  ************************************  //






   //  *********************************************  fonction Quitter     *********************************  //





   //  *********************************************  Programme Principale     *********************************  //


int main()
{
	struct menu M;
	struct menu tab[100];
	int max;	


	Menu(tab, M , max);


}
