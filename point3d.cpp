#include<stdio.h>
#include<conio.h>
struct point3d{
	float x,y,z;
};
struct point3d saisie()
{
	struct point3d p;
	printf("donner les corrdonnee du oint3d");
	scanf("%f%f%f",&p.x,&p.y,&p.z);
	
	return p;
}
void  affiche_point3d(struct point3d pp)
{
	printf ("le coord sont: x=%f ,Y=%f , z=%f",pp.x,pp.y,pp.z);
}
int main()
{
	
	
		struct point3d p1,p2;
		
	p1= saisie();
	p2= saisie();
	
 affiche_point3d(p1);
 affiche_point3d(p2);		
	
getch();
}
