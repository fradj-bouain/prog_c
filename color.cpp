#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
int main(int argc, char *argv[])
{
 char txte[10];
    char nom[10];
	int a,b ,i;
	a=2;
	b=a+6;
Color(10, 0) ;
printf("la valeur de a est %d \n", a);
	
	
	
	char txt[50];
		char pre[50];

	int h,t;
	
	
	printf("entrez votre prenom svp!\n");
	gets(pre);
	t=strlen(txt);
	h=strlen(pre);
	h=t+h;
	printf("bonjour %s ! votre nome est compose de %d lettres",pre,h);
	// ****************COLOR ********//


    char prenom[100];

    printf("Comment t'appelles-tu petit Zero ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !", prenom);

  puts(prenom);
// *******************************//
printf("entrez un text svp!\n");
	gets(txte);
   
getch();
}

