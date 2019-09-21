#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<time.h>

void main()
{
	clock_t f,i;
	float z=0,tot;
	int hr,minn,min;
	int ii=1  ;
	i=clock();
	while(ii!=0)
	cin>>ii;
	f=clock();
	z=f-i;
	tot=z/CLK_TCK  ;
	min=tot/60;
	hr=(int)min/60;
	minn=min%60;
	cout<<hr<<"hr";
	cout<<" "<<minn<<"min";
 }
