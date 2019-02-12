#include<stdio.h>
#include<conio.h>
#include<string.h>

struct heure{
	int hh;
	int mm;
	int ss;
	
};
int convth_s(struct heure H) 
{
	H.hh=H.hh*3600+H.mm*60+H.ss;
	return H.hh;
	
	
}
struct heure convts_h( int s) 
{
	struct heure x;
	x.hh=s/3600;
	x.mm=(s%3600)/60;
	x.ss=((s%3600)%60);
     return x;
}
struct heure  saisie()
{
	struct heure  p;
	printf("donner le temps hh/mm/ss \n");
	scanf("%d\n%d\n%d",&p.hh,&p.mm,&p.ss);
	

	return p;
}

int main()
{
	struct heure h1,d;
	int s,h;
	
	h1=saisie();
	
	s=convth_s(h1);
	printf ("le temp apres le convert heur en secand  sont:\n %d\n",s);
	
	printf ("donner un nombre en secand\n");
	scanf("%d",&h);
	d=convts_h(h);
		printf ("le temp apres le convert secand en heur  sont:\n %d/%d/%d",d.hh,d.mm,d.ss);
	
	getch();
}
