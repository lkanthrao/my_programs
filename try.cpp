#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int m,n;
void display();
char a[15][15];
void main()
{
 int i,j,d=0,x=0,y=0;
 char kk,nam[25],name[25];

 cin>>m>>n;
 for(i=1;i<=m;i++)
	 for(j=1;j<=n;j++)
	  a[i][j]=' ';
 cout<<"\nEnter 1st player name: ";
 scanf("%s",&nam);
 cout<<"\nEnter 2nd player name: ";
 scanf("%s",&name);


 display();


 while(d!=m*n)
 {
	if(d%2==0)
	printf("turn:%s\n",nam);
	else
	printf("turn:%s\n",name);
	cout<<"Enter the row and column number\n";
	scanf("%d %d",&x,&y);
	cout<<"Choose the letter 's' or 'o' to be filled\n";
	cin>>kk;
	a[x][y]=kk;
	if(a[x][y+1]=='o' && a[x][y+2]=='s'){
	a[x][y]='t';a[x][y+1]='t';a[x][y]='t';}
	else if(a[x][y-1]=='s' && a[x][y+1]=='s'){
	a[x][y]='t';a[x][y-1]='t';a[x][y+1]='t';}
	else if(a[x-1][y]=='o' && a[x-2][y]=='s'){
	a[x][y]='t';a[x-1][y]='t';a[x-2][y]='t';}
	else if(a[x-1][y]=='s' && a[x+1][y]=='s'){
	a[x][y]='t';a[x-1][y]='t';a[x+1][y]='t';}
	else if(a[x+1][y+1]=='o' && a[x+2][y+2]=='s'){
	a[x][y]='t';a[x+1][y+1]='t';a[x+2][y+2]='t';}
	else if(a[x-1][y-1]=='s' && a[x+1][y+1]=='s'){
	a[x][y]='t';a[x-1][y-1]='t';a[x+1][y+1]='t';}
	else if(a[x+1][y-1]=='o' && a[x+2][y-2]=='s'){
	a[x][y]='t';a[x+1][y-1]='t';a[x+2][y-2]='t';}
	else if(a[x-1][y+1]=='s' && a[x+1][y-1]=='s'){
	a[x][y]='t';a[x-1][y+1]='t';a[x+1][y-1]='t';}
	else
	cout<<"invalid\n";
	display();

	d++;
 }
}

void display()
{
for(int i=1;i<=m;i++)
	{
	 for(int j=1;j<=n;j++)
	 printf("| %c ",a[i][j]);
	 printf("\n");
	 for(int w=0;w<m;w++)
	 printf("----");
	 printf("\n");

	}
}

