#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

struct menu saisie(struct menu M);
void Menu(struct menu tab[] , struct menu M , int max);
void Ajouter(struct menu tab[] , struct menu M , int max);
void Afficher(struct menu tab[] , int max , struct menu M);
void Rechercher_nom(struct menu tab[] , int max , struct menu M);
void Rechercher_auteur(struct menu tab[] , int max , struct menu M);
void Rechercher_matrecule(struct menu tab[] , int max , struct menu M);
void Modifier_tous(struct menu tab[] , int max , struct menu M);
void Modifier_nom(struct menu tab[] , int max , struct menu M);
void Modifier_date(struct menu tab[] , int max , struct menu M);
void Modifier_auteur(struct menu tab[] , int max , struct menu M);
void Modifier_matrecule(struct menu tab[] , int max , struct menu M);
void Supprimer(struct menu tab[] , int max , struct menu M);
void Quitter();
int sup(struct menu tab[],int max,struct menu M,int matreculesup);
void ajouter_ou_non( struct menu tab[], struct menu M,int max,int i);
int ver(int i);
int rech(int vrai,  struct menu tab[] , int max);
void Color(int couleurDuTexte,int couleurDeFond); // fonction d'affichage de couleurs



           // **************************************     Menu      ********************************//


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









void Menu(struct menu tab[] , struct menu M , int max)
{            

int choix;	
int rech;

 Color(10, 0) ;             
			   
		  printf("\n      ******************** BIENVENUE DANS NOTRE BIBLIOTEQUE ****************************     \n");


	printf("\n               Appuiyer sur '1' pour Ajouter un ou plusieurs livres  \n");
	printf("\n               Appuiyer sur '2' pour Affiche toutes les livres \n");
	printf("\n               Appuiyer sur '3' pour Rechercher un livre\n");
	printf("\n               Appuiyer sur '4' pour Modifier un livre\n");
	printf("\n               Appuiyer sur '5' pour Supprimer un livres\n");	
    printf("\n               Appuiyer sur '6' pour Quitter le programme\n");
    
    
   
            printf("\n     ********************************************************************************     \n\n");
Color(15, 0) ;
printf("je suis en attend pour entre votre choix , Merci !\n");

do{  scanf("%i",&choix); if (choix<1||choix>6){  Color(12, 0) ;printf("valeur non correct respecter les donner svp !\n\n"); Color(15, 0) ;  } }
while (choix<1 || choix>6);



switch(choix)
{

case 1 :Ajouter(tab, M , max);        
break;

case 2 :  	
	Afficher(tab,max,M);      
break;

case 3 : 
       Color(5, 0) ;
	    printf("\n    ********************************************************************************     \n");
	  Color(10, 0) ;   
       printf("\n            Appuiyer sur '1' pour rechercher par nom \n");
       printf("\n            Appuiyer sur '2' pour rechercher par matrecule \n");
       printf("\n            Appuiyer sur '3' pour rechercher par nom de l'auteur' \n");
        Color(5, 0) ;
        printf("\n    ********************************************************************************     \n\n");
         Color(15, 0) ;
                     printf("je suis en attend pour entre votre choix de recherche , Merci !\n");

                        do{  scanf("%i",&rech); if (rech<1||rech>3){  Color(12, 0) ;printf("valeur non correct respecter les donner svp !\n\n"); Color(15, 0) ; }  }
                        while (rech<1 || rech>3);

                     if(rech==1){ Rechercher_nom(tab , max , M);}
                     else if (rech==2){ Rechercher_matrecule(tab , max , M);}
                     else if (rech==3){ Rechercher_auteur(tab , max , M);}
                           
break;

case 4 : 

   Color(5, 0) ;
	    printf("\n    ********************************************************************************     \n");
	  Color(10, 0) ;  
	  
        printf("\n           Appuiyer sur '1' pour modifier  toutes les parametres \n");
        printf("\n           Appuiyer sur '2' pour modifier le nom \n");
        printf("\n           Appuiyer sur '3' pour modifier le  date d'ajouter \n");
        printf("\n           Appuiyer sur '4' pour modifier le  matrecule \n");
        printf("\n           Appuiyer sur '5' pour modifier le nom de l'auteur' \n");
        
         Color(5, 0) ;
	    printf("\n    ********************************************************************************     \n\n");
	  Color(15, 0) ;  
                     printf("je suis en attend pour entre votre choix de modifier , Merci !\n");

                        do{  scanf("%i",&rech); if (rech<1||rech>5){  Color(12, 0) ;printf("valeur non correct respecter les donner svp !\n\n"); Color(15, 0) ; }  }
                        while (rech<1 || rech>5);

                     if(rech==1){ Modifier_tous( tab , max , M);}
                     else if (rech==2){  Modifier_nom( tab , max , M);}
                     else if (rech==3){  Modifier_date( tab , max , M);}
                     else if (rech==4){  Modifier_matrecule( tab , max , M);}
                     else if (rech=5){  Modifier_auteur( tab , max , M);}
break;

case 5 : 

	Supprimer(tab,max,M);  

break;


  // ************************** fonction quitter ****************************  //

case 6 : Quitter();
break;



default : break;

}



}

         
		 



        // **********************************************   fonction Ajouter   ********************************* //

struct menu saisie(  struct menu tab[],struct menu M , int max)
{
	int vrai;	
	int res;
	int i=0;
	int j=0;
	

	printf("\nentrez le matrecule de livre (il doit être unnique):\n ");
	
	do{
	
	scanf("%i",&M.matrecule);
    vrai=M.matrecule;
    res=rech(vrai,tab,max);
    
}while( res==1);

    fflush(stdin);
	printf("\n2-entrez le date d'ajoute:\n");
	do{
	
	printf("le jour:");
		scanf("%i",&M.date.jj);
	    fflush(stdin);
	if (M.date.jj>31){ Color(12, 0) ;printf ("\nsvp!, il y a 31 jour en mois corriger votre reponse!\n"); Color(15, 0) ;}
}while (M.date.jj>31);


	do{
	
	printf("le mois:");
	scanf("%i",&M.date.mm);
	fflush(stdin);
	if (M.date.mm>12){ Color(12, 0) ;printf ("\nsvp!, il y a 12 mois corriger votre reponse!\n"); Color(15, 0) ;}
}while (M.date.mm>12);
	
	printf("l'annee:");
	scanf("%i",&M.date.yy);
	fflush(stdin);

	printf("\n3-entrez le nom de livre:\n");
	gets(M.nom);
	fflush(stdin);
	printf("\n4-entrez le nom de l'auteur du livre:\n");
	gets(M.auteur);
	fflush(stdin);
	
	return(M);
		
}


void Ajouter( struct menu tab[], struct menu M,int max )
{
	int i;
	
	Color(5, 0) ;
	printf("\n        ********  le fonction Ajouter vous souhaite la bienvenue  *********\n\n");
	Color(15, 0) ;  
	

 i=max;

	i=i+1;
	 i=ver(i);
	max=i;
	

Color(10, 0) ;

		printf("\n**************************  livre : %i  **************************\n",i);
	
		
Color(15, 0) ;

	tab[i]=saisie(tab,M,max);
	
	ajouter_ou_non(tab,M,max,i);
	

}






       //  *********************************************  fonction Afficher tous les livres  *********************************  //

void Afficher(struct menu tab[] , int max ,struct menu M )
{
	int i;
	int retur;
Color(5, 0) ;

	printf("\n        ********  le fonction Afficher vous souhaite la bienvenue  *********\n\n");
	
Color(15, 0) ;           


	    

	   for (i=0;i<=max;i++)
	   {
	   		
Color(10, 0) ;

	   	
	                            printf("\n\n**************************  livre : %i  **************************\n",i);

Color(15, 0) ;

	   
	   	printf("\nle nom est: %s",tab[i].nom);
        printf("\nle date est: %i/%i/%i",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
		printf("\nle matrecule est: %i",tab[i].matrecule);
		printf("\nle nom de l'auteur est: %s",tab[i].auteur);	   	
}

           printf("\n\n         ********  merci pour utiliser le fonction Afficher  *********\n\n");
	
Color(10, 0) ;

           printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}

while(retur != 0);

Color(10, 0) ;

    Menu(tab,M , max);


}








   //  *********************************************  fonction Rechercher le nom *********************************  //

void Rechercher_nom(struct menu tab[],int max,struct menu M)
{
	int retur;
     int j=0;
	int i;
	char nomrech[10];
	
	 Color(5, 0) ;
	 
	                 printf("\n         ********  le fonction Rechercher vous souhaite la bienvenue *********\n\n");
	 
	  Color(15, 0) ;
	                 
	     printf("\n\n entrez le nom de livre qui tu veut trouver svp!\n");
	   scanf("%s",&nomrech);     
	   
	 for (i=0;i<=max;i++)  
	   {
	   	


	   	
	if (strcmp(tab[i].nom,nomrech)==0   ){
		
		j=j+1;

	  Color(10, 0) ;

			                 printf("\n         ************************************************************");
	  Color(15, 0) ;
		
		printf("\n\nle livre est: %s\n",tab[i].nom);
			printf("la date d'ajouter: %i/%i/%i\n",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
				printf("le matrecule: %i\n",tab[i].matrecule);
					printf("l'auteur: %s\n",tab[i].auteur);
	}
	
		   else{
		   	
	   if(j==0 && i==max){
			   
	   printf("\ncette livre n'est pas trouver\n");
}
               }
                                         }
	   

 printf("\n     ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");	   

	
Color(10, 0) ;

 printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;

    Menu(tab,M , max);

 
}





   //  *********************************************  fonction Rechercher de l'auteur  *********************************  //

void Rechercher_auteur(struct menu tab[],int max,struct menu M)
{
	int retur;
    int j=0;
	int i;
	char auteurrech[10];
	
	      Color(5, 0) ;
	      
		             printf("\n      ********  le fonction Rechercher vous souhaite la bienvenue  *********\n\n");
	            
				
		 Color(15, 0) ;		     
	     printf("\n\n entrez le nom de l'auteur de livre qui tu veut trouver svp!\n");
	   scanf("%s",&auteurrech);     
	   
	 for (i=0;i<=max;i++)  
	   {


	if (strcmp(tab[i].auteur,auteurrech)==0 ){
		
		j=j+1;
		
		 Color(10, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
	  
		printf("\n\nle livre est: %s\n",tab[i].nom);
			printf("la date d'ajouter: %i/%i/%i\n",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
				printf("le matrecule: %i\n",tab[i].matrecule);
					printf("l'auteur: %s\n",tab[i].auteur);
	}
	
		   else{
	   if(j==0 && i==max){
	
	   printf("\ncette livre n'est pas trouver\n");
}
              }
                                          }
	   

	    printf("\n     ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");

	
Color(10, 0) ;


 printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;
    

   Menu(tab , M , max);

}


   //  *********************************************  fonction Rechercher le matrecule *********************************  //

void Rechercher_matrecule(struct menu tab[],int max,struct menu M)
{
	int retur;
    int j=0;
	int i;
	int matreculerech;
	
	
Color(5, 0) ;
	
	                 printf("\n       ********  le fonction Rechercher vous souhaite la bienvenue  *********\n\n");
	       
		   
Color(15, 0) ;
			          
	     printf("\n\n entrez le matrecule de livre qui tu veut trouver svp!\n");
	   scanf("%i",&matreculerech);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule==matreculerech ){
		
		j=j+1;
		
		 Color(10, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
	  
			printf("\n\nle livre est: %s\n",tab[i].nom);
			printf("la date d'ajouter: %i/%i/%i\n",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
				printf("le matrecule: %i\n",tab[i].matrecule);
					printf("l'auteur: %s\n",tab[i].auteur);
	}
	                                    
		   else{
	   
	   if(j==0 && i==max){
			   
	   printf("\ncette livre n'est pas trouver\n");
}
}

	   }

	    printf("\n        ********  merci pour utiliser le fonction Rechercher  *********\n\n\n");

	
Color(10, 0) ;


  printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);

}







 

   //  *********************************************  fonction Modifier tous les parametres   *********************************  //


void Modifier_tous(struct menu tab[],int max,struct menu M)
{
	int retur;
	int j=0;
	int i;
	int vrai;
	int res;
	int nouvmatrecule;
	int  matreculemodif;

 Color(10, 0) ;

	                 printf("\n       ********  le fonction Rechercher vous souhaite la bienvenue  *********\n\n");
	                 
 Color(15, 0) ;
	
	  printf("\n\n entrez le matrecule de livre qui tu veut modifier svp!\n");
	   scanf("%i",&matreculemodif);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule== matreculemodif ){
		
		j=j+1;
		
		 Color(5, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
	  
		printf("\n\nle livre est: %s \n entrez le nouvelle nom :  ",tab[i].nom);
		scanf("%s",&tab[i].nom);
			printf("\nla date d'ajouter: %i/%i/%i \n entrez le nouvelle date : ",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);

	        printf("\nle jour:");
		    scanf("%i",&tab[i].date.jj);
	        fflush(stdin);
        	if (tab[i].date.jj>31){ Color(12, 0) ;printf ("\nsvp!, il y a 31 jour en mois corriger votre reponse!\n"); Color(15, 0) ;}
            while (tab[i].date.jj>31);


        	do{
	        printf("le mois:");
	        scanf("%i",&tab[i].date.mm);
	        fflush(stdin);
	        if (tab[i].date.mm>12){ Color(12, 0) ;printf ("\nsvp!, il y a 12 mois corriger votre reponse!\n"); Color(15, 0) ;}
            }while (tab[i].date.mm>12);
			
				printf("l'annee:");
	            scanf("%i",&tab[i].date.yy);
	            fflush(stdin);
	            
	            
	            
				printf("\nle matrecule: %i \n entrez le nouvelle matrecule: ",tab[i].matrecule);
								do{
	
	     	scanf("%i",&nouvmatrecule);
            vrai=nouvmatrecule;
            res=rech(vrai,tab,max);
    
                                }while( res==1);
				
	        tab[i].matrecule=nouvmatrecule;

		  			
	
	
				
					printf("\nl'auteur: %s \n entrez le nouvelle auteur : ",tab[i].auteur);
					scanf("%s",&tab[i].auteur);
	
      }
	
	
		   else{
	   if(j==0 && i==max){
			    
	   printf("\ncette livre n'est pas trouver\n");
}
              }
                                       }
	   	    printf("\n     ********  merci pour utiliser le fonction Modifier  *********\n\n\n");

		
Color(10, 0) ;


 printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);
    
}





   //  *********************************************  fonction Modifier le nom   *********************************  //

void Modifier_nom(struct menu tab[],int max,struct menu M)
{
	int retur;
	int j=0;
	int i;
	int  matreculemodif;
	           
 Color(5, 0) ;			   
			   
			         printf("\n       ********  le fonction Modifier vous souhaite la bienvenue  *********\n\n");
	   
 Color(15, 0) ;	                 
	
	  printf("\n\n entrez le matrecule de livre qui tu veut modifier svp!\n");
	   scanf("%i",&matreculemodif);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule== matreculemodif ){
		
		j=j+1;
		
		 Color(10, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
		
		printf("\n\nle livre est: %s \n entrez le nouvelle nom : \n ",tab[i].nom);
		scanf("%s",&tab[i].nom);
	
	   }
	
		   else{
	   
	   if(j==0 && i==max){
			   
	   printf("\ncette livre n'est pas trouver\n");
}
             }
    }
	   
	    printf("\n     ********  merci pour utiliser le fonction Modifier  *********\n\n\n");
		
Color(10, 0) ;


  printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;

    Menu(tab,M , max);
    
}






   //  *********************************************  fonction Modifier le date   *********************************  //

void Modifier_date(struct menu tab[],int max,struct menu M)
{
	int retur;
	int j=0;
	int i;
	int  matreculemodif;

 Color(5, 0) ;	          
			  
			         printf("\n       ********  le fonction Modifier vous souhaite la bienvenue  *********\n\n");

 Color(15, 0) ;	                 
	
	  printf("\n\n entrez le matrecule de livre qui tu veut modifier svp!\n");
	
	   scanf("%i",&matreculemodif);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule== matreculemodif ){
		
		j=j+1;
		
		 Color(10, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
	
			printf("\n\nla date d'ajouter: %i/%i/%i \n entrez le nouvelle date : \n",tab[i].date.jj,tab[i].date.mm,tab[i].date.yy);
			do{
	
	        printf("le jour:");
		    scanf("%i",&tab[i].date.jj);
	        fflush(stdin);
        	if (tab[i].date.jj>31){ Color(12, 0) ;printf ("\nsvp!, il y a 31 jour en mois corriger votre reponse!\n"); Color(15, 0) ;}
            }while (tab[i].date.jj>31);


        	do{
	
	        printf("le mois:");
	        scanf("%i",&tab[i].date.mm);
	        fflush(stdin);
	        if (tab[i].date.mm>12){ Color(12, 0) ;printf ("\nsvp!, il y a 12 mois corriger votre reponse!\n"); Color(15, 0) ;}
            }while (tab[i].date.mm>12);
			
				printf("l'annee':");
	            scanf("%i",&tab[i].date.yy);
	            fflush(stdin);
	}
	
		   else{
	   
	   if(j==0 && i==max){
			   
	   printf("\ncette livre n'est pas trouver\n");
                       }
              }
        }
	   
	   	    printf("\n     ********  merci pour utiliser le fonction Modifier  *********\n\n\n");

		
Color(10, 0) ;

 printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
		
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);
    
}






   //  *********************************************  fonction Modifier le matrecule   *********************************  //


void Modifier_matrecule(struct menu tab[],int max,struct menu M)
{
	int vrai;
	int res;
	int retur;
	int j=0;
	int i;
	int nouvmatrecule;
	int matreculemodif;
	           
 Color(10, 0) ;		
			   
			         printf("\n       ********  le fonction Modifier vous souhaite la bienvenue  *********\n\n");
	                 
 Color(15, 0) ;
	
	  printf("\n\n entrez le matrecule de livre qui tu veut modifier svp!\n");
	   scanf("%i",&matreculemodif);  
	   
	      
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule==matreculemodif ){
		
		j=j+1;
		
		 Color(5, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
		
				printf("\n\nle matrecule: %i \n entrez le nouvelle matrecule : ",tab[i].matrecule);
			
			
				
				do{
	
		scanf("%i",&nouvmatrecule);
    vrai=nouvmatrecule;
    res=rech(vrai,tab,max);
    
}while( res==1);
				
	tab[i].matrecule=nouvmatrecule;

 Color(10, 0) ;
		printf("\nmodification succer\n");		
 Color(15, 0) ;		

		  			
	}
	
		   else{
	   
	   if(j==0 && i==max){	   
	   	Color(12, 0) ;
	   printf("\ncette livre n'est pas trouver\n");
          Color(15, 0) ;             }
              }
        }
	   
		    printf("\n     ********  merci pour utiliser le fonction Modifier  *********\n\n\n");

	
Color(10, 0) ;

  printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
		
Color(12, 0) ;
	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);
    
}





   //  *********************************************  fonction Modifier lenom de l'auteur   *********************************  //

void Modifier_auteur(struct menu tab[],int max,struct menu M)
{
	int retur;
	int j=0;
	int i;
	int matreculemodif;
	         
 Color(10, 0) ;			 
			 
			         printf("\n       ********  le fonction Modifier vous souhaite la bienvenue  *********\n\n");
	                 
 Color(15, 0) ;
	
	  printf("\n\n entrez le matrecule de livre qui tu veut modifier svp!\n");
	   scanf("%i",&matreculemodif);     
	   
	 for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule==matreculemodif ){
	         
	         j=j+1;
	         
	          Color(10, 0) ;

			                 printf("\n         ************************************************************\n\n");
	  Color(15, 0) ;
			
					printf("\n\nl'auteur: %s \n entrez le nouvelle auteur :  ",tab[i].auteur);
					scanf("%s",&tab[i].auteur);
	}
	
		   else{
	   
	   if(j==0 && i==max){	   
	   
	   printf("\ncette livre n'est pas trouver\n");
                        }
               }
                                        
	   }
	
		    printf("\n     ********  merci pour utiliser le fonction Modifier  *********\n\n\n");

	
Color(10, 0) ;

  printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
		
Color(12, 0) ;

	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);


}








   //  *****************************************  fonction Supprimer  ************************************  //


void Supprimer(struct menu tab[],int max,struct menu M)
{
	int ind;
	int j;
	int i;
	int retur;
	int matreculesup;
	
 Color(5, 0) ;	
	
	  	                 printf("\n       ********  le fonction Supprimer vous souhaite la bienvenue  *********\n\n");

 Color(15, 0) ;
	  
	  printf("\n\n entrez le matrecule de livre qui tu veut supprimer svp!\n");
	   scanf("%i",&matreculesup);     
	   
	 
ind=sup(tab, max, M, matreculesup);
	   
	   
	   
	   	  
  for(i=ind;i<=max-1 ;i++) { tab[i]=tab[i+1]; 
  	      
} 
  max--; 
  Color(10, 0) ;
     printf("\nsupprimer est terminer avec succer\n ");
  Color(15, 0) ;

	             printf("\n        ********  merci pour utiliser le fonction Supprimer  *********\n\n\n");
	             

 	  	
Color(10, 0) ;

	
                printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
		
Color(12, 0) ;


	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);

}

   //  *********************************************  fonction Quitter     *********************************  //


void Quitter()
{
Color(12, 0) ;
	printf("\n la programme est fermer merci pour votre utiliser ,Au revoir!\n");
Color(15, 0) ;

}







  //  *********************************************  fonction de verification matrecule     *********************************  //


int rech(int vrai,  struct menu tab[] , int max){
	
	
	
	int i;
	for (i=0;i<=max;i++){
		if (tab[i].matrecule==vrai)
		{
			Color(12, 0) ;
			printf("\n cette matrecule est utiliser par un autre  livre entrez autre matrecule :\n ");
			Color(15, 0) ;
			return (1);
			
		}
		else if (tab[i].matrecule!=vrai )
		{
			if (i==max)
			{
				return (0);
			}
		}
	}
}





  //  *********************************************  fonction  verifier le depart de compteur    *********************************  //


int ver(int i){
		
		if(i==1){i=5;
		return(i);}
	
}




  //  *********************************************  fonction de verification ajouter un autre nom ou non     *********************************  //


void ajouter_ou_non( struct menu tab[], struct menu M,int max,int i)
{
	

	char ajout;
	printf ("\nest ce que tu veut ajouter un autre livre ou non [O/N]: ");
	scanf("%c",&ajout);
	ajout=toupper(ajout);
	if (ajout=='N')
	{
	
	printf("\n       ********  merci pour utiliser le fonction ajouter  *********\n\n\n"); 
	
   Menu(tab , M , max );
	}
	else if (ajout=='O'){
	
		
		Ajouter(tab,M,max);
	}
}






int sup(struct menu tab[],int max,struct menu M,int matreculesup)
{
int j;
int i;
int ind;
int retur;
for (i=0;i<=max;i++)  
	   {
	if (tab[i].matrecule==matreculesup ){
	         
	         j=j+1;
	         ind=i;
     
             return(ind);
	
	
	                                         
											 
											 }
	
		   else{
	   
	   if(j==0 && i==max){	   
	   
	   printf("\ncette livre n'est pas trouver\n");
	   
	   
	             printf("********  merci pour utiliser le fonction Supprimer  *********\n\n\n");
	             

 	  	
Color(10, 0) ;

	
                printf("\n\n       ********* appuiyer sur '0' pour return a menu svp ! *********\n");

do{
	scanf("%i",&retur);
	
		
Color(12, 0) ;


	if(retur!=0){ printf("\n  respecter le donner svp !\n"); }
}
while(retur != 0);

Color(10, 0) ;


    Menu(tab,M , max);
                        }
               }
                                        
	   }


}




   //  *********************************************  fonction color    *********************************  //


void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


   //  *********************************************  Programme Principale     *********************************  //


int main(int argc, char *argv[])
{
	struct menu M;
	struct menu tab[100];
	int max;	
	int i;

     max=max+4; 


tab[0].matrecule=1;
tab[0].date.jj=12;
tab[0].date.mm=1;
tab[0].date.yy=1222;
char chain1[]="rood";
strcpy(tab[0].nom, chain1); 
char chain2[]="fred";
strcpy(tab[0].auteur, chain2); 

tab[1].matrecule=2;
tab[1].date.jj=15;
tab[1].date.mm=10;
tab[1].date.yy=1952;
char chain3[]="prince";
strcpy(tab[1].nom, chain3); 
char chain4[]="john";
strcpy(tab[1].auteur, chain4); 

tab[2].matrecule=3;
tab[2].date.jj=25;
tab[2].date.mm=3;
tab[2].date.yy=2002;
char chain5[]="poor";
strcpy(tab[2].nom, chain5); 
char chain6[]="mark";
strcpy(tab[2].auteur, chain6); 

tab[3].matrecule=4;
tab[3].date.jj=11;
tab[3].date.mm=06;
tab[3].date.yy=1995;
char chain7[]="freez";
strcpy(tab[3].nom, chain7); 
char chain8[]="robin";
strcpy(tab[3].auteur, chain8); 

tab[4].matrecule=5;
tab[4].date.jj=30;
tab[4].date.mm=07;
tab[4].date.yy=1925;
char chain9[]="ice age";
strcpy(tab[4].nom, chain9); 
char chain10[]="morin";
strcpy(tab[4].auteur, chain10); 
	
	Menu(tab,M,max);

}
