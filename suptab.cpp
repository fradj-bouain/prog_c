#include <stdio.h> 
#include <conio.h> 
int main()
 { 
 int t[50], n, v, i, ind ; 
 v=0; printf ("taille de tableau");
  scanf("%i",&n); 
  for (i=0;i<n;i++) 
  { printf("t[%i]",i); scanf("%i",&t[i]); } 
  printf("donner l'indice à supprimer"); scanf("%i",&ind); for(i=ind;i<n-1 ;i++) { t[i]=t[i+1]; } 
  n--; for (i=0;i<n;i++)
{ printf("%i**",t[i]); }getch(); return 0;
 }
