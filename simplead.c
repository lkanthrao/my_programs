#include<stdio.h>
#include<conio.h>

void main()
{
 float sum=0,a;
 clrscr();
 while(1)
 {
  printf("\n\nEnter the number and press 1000 to exit");
  scanf("%f",&a);
  if(a==1000)
  goto bottom;
  sum=sum+a;
  printf("Sum=%f",sum);
  }
  bottom:getch();
 }
