#include<stdio.h>
#include<conio.h>

int diesel();
void main()
{
 long int n,preading=0,nomove=0,nodays=0,perdaytemp=0,prkm=0,var=0,totalkm=0;
 long int stack=0;
 clrscr();
 printf(".........................Welcome........................\n");
 printf("\nProgram by kanth,\n");
 totalkm=diesel();
 printf("\nEnter the no of days in this month: ");
 scanf("%lu",&n);
 printf("Enter the no of no movements:");
 scanf("%lu",&nomove);
 nodays=n-nomove;
 printf("No of days are: %lu",nodays);
 perdaytemp=totalkm/nodays;
 printf("\nPerday: %lu",perdaytemp);
 printf("\nEnter the previous km reading: ");
 scanf("%lu",&preading);

 for(int i=0;i<nodays;i++)
 {
  printf("\n\nEnter km: ");
  scanf("%lu",&prkm);
  preading=preading+prkm;
  printf("reading: %lu",preading);
  var=perdaytemp-prkm;
  stack=stack+var;
  printf("\tBalance: %d",stack);
  }
  getch();
  }

  int diesel()
  {
	int di=0,tot=0,km=0,newb=0,old=0,ntot=0;
	printf("\nEnter the consumed diesel(liters): ");
	scanf("%d",&di);
	printf("Enter the old balance: ");
	scanf("%d",&old);
	tot=di+old;
	printf("Total diesel: %d\n",tot);
	printf("Enter the new balance: ");
	scanf("%d",&newb);
	ntot=tot-newb;
	printf("diesel consumed for this month: %d",ntot);
	km=ntot*8.5;
	printf("\nTotal km: %d",km);
	return (km);
  }




