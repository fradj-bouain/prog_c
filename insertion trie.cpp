
#include <stdio.h>
main()
{
 /* D�clarations */
 int A[50]; /* tableau donn�    */
 int VAL;   /* valeur � ins�rer */
 int N;     /* dimension        */
 int I;     /* indice courant   */

 /* Saisie des donn�es */
 printf("Dimension N du tableau initial (max.50) : ");
 scanf("%d", &N );
 for (I=0; I<N; I++)
    {
     printf("El�ment %d : ", I);
     scanf("%d", &A[I]);
    }
 printf("El�ment � ins�rer : ");
 scanf("%d", &VAL );
 /* Affichage du tableau */
 printf("Tableau donn� : \n");
 for (I=0; I<N; I++)
    printf("%d ", A[I]);
 printf("\n");
 /* D�placer les �l�ments plus grands que */
 /* VAL d'une position vers l'arri�re.    */
 for (I=N ; (I>0)&&(A[I-1]>VAL) ; I--)
       A[I]=A[I-1];
 /* VAL est copi� � la position du dernier */
 /* �l�ment d�plac�. */
 A[I]=VAL;
 /* Nouvelle dimension du tableau ! */
 N++;
  /* Edition des r�sultats */
 printf("Tableau r�sultat :\n");
 for (I=0; I<N; I++)
    printf("%d ", A[I]);
 printf("\n");
 return 0;
}
