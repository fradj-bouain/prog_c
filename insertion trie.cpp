
#include <stdio.h>
main()
{
 /* Déclarations */
 int A[50]; /* tableau donné    */
 int VAL;   /* valeur à insérer */
 int N;     /* dimension        */
 int I;     /* indice courant   */

 /* Saisie des données */
 printf("Dimension N du tableau initial (max.50) : ");
 scanf("%d", &N );
 for (I=0; I<N; I++)
    {
     printf("Elément %d : ", I);
     scanf("%d", &A[I]);
    }
 printf("Elément à insérer : ");
 scanf("%d", &VAL );
 /* Affichage du tableau */
 printf("Tableau donné : \n");
 for (I=0; I<N; I++)
    printf("%d ", A[I]);
 printf("\n");
 /* Déplacer les éléments plus grands que */
 /* VAL d'une position vers l'arrière.    */
 for (I=N ; (I>0)&&(A[I-1]>VAL) ; I--)
       A[I]=A[I-1];
 /* VAL est copié à la position du dernier */
 /* élément déplacé. */
 A[I]=VAL;
 /* Nouvelle dimension du tableau ! */
 N++;
  /* Edition des résultats */
 printf("Tableau résultat :\n");
 for (I=0; I<N; I++)
    printf("%d ", A[I]);
 printf("\n");
 return 0;
}
