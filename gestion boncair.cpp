#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void saisie_etudiant(FILE *etudiant_dat);
void menu();
void affichage_etudiant(FILE * etudiant_dat);
void rechercher_etudiant( FILE * etudiant_dat);
void suppresion_etudiant(FILE *etudiant_dat);
void saisir_note (FILE *note_dat);
void modifier_note(FILE* note_dat);
FILE* moyenne_etudiant(FILE* etudiant_dat);
void affichage_moyennes(FILE* etudiant_dat);
 
int main()
{
    FILE * etudiant_dat=NULL;
    FILE * note_dat=NULL;
    int choix;
    do
    {
        menu();
    do
    {
      scanf("%d",&choix);
      if(choix<0||choix>6)
      printf("choix invalide\n" );
    }while(choix<0||choix>8);
    switch (choix)
    {
        case 1 : saisie_etudiant(etudiant_dat); break;
        case 2 : affichage_etudiant(etudiant_dat); break;
        case 3 : rechercher_etudiant(etudiant_dat); break;
        case 4 : suppresion_etudiant(etudiant_dat); break;
        case 5 : saisir_note(note_dat); break;
        case 6 : modifier_note(note_dat); break;
        case 7 : moyenne_etudiant(etudiant_dat); break;
        case 8 : affichage_moyennes(etudiant_dat); break;
        case 0 : exit(0);
    }
    }while(1);
}
void menu()
{
    printf("1.saisir un nouveau etudiant\n" );
    printf("2.Affichage des etudiants \n");
    printf("3.rechercher etudiant \n" );
    printf("4.suppression etudiant \n" );
    printf("5.saisie note des etudinats \n");
    printf("6.modifier note d'un etudiant\n");
    printf("7.calcul les moyennes d'un etudiant\n" );
    printf("8.affichage tout les moyennes\n");
}
struct Etudiant
{
 
	char code[5];
	char prenom[20];;
	char nom[20];
	char departement[20];
};
void saisie()
{char vouloir;
    FILE *fichier;
    fichier = fopen("etudiant_dat","a");
do{
    system("cls");
    printf("\nEntrer le code:");
    scanf("%s",&code);
    printf("\nEntrer le prenom:");
    scanf("%s",&prenom);
    printf("\nEntrer le nom:");
    scanf("%s",&nom);
    printf("\nEntrer le departement:");
    scanf("%s",&departement);
 
    fwrite(&info, sizeof(info),1, fichier);
    printf("\n\nVoulez vous continuer o/n ?");
    getch();
 
    }while ((vouloir!='n')  && (vouloir='N'));
     fclose(fichier);
}
void affichage()
{
    FILE *fichier;
    fichier = fopen("etudiant_dat","r");
    do{
        printf("\n%s\t%s\t%s\t%s\t%s", code,prenom, nom,departement);
    }while (!feof(fichier));
    fclose(fichier);
}
