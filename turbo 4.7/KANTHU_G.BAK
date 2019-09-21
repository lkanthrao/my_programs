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
 printf("\n~~~~This game Program is created by Lakshmikanth rao~~~~\n\n");
 cout<<"\nEnter 1st player name: ";
 scanf("%s",&nam);
 cout<<"\nEnter 2nd player name: ";
 scanf("%s",&name);
 cout<<"\nEnter the number of rows: ";
 cin>>m;
 cout<<"\nEnter the number columns: ";
 cin>>n;
 cout<<"\n";
 for(i=1;i<=m;i++)
  for(j=1;j<=n;j++)
	  a[i][j]=' ';
 display();

 while(d!=m*n)
 { top:
	if(d%2==0)
	printf("\nturn (player1):%s\n",nam);
	else
	printf("\nturn (player2):%s\n",name);
	cout<<"\nEnter the row number: ";
	cin>>x;
	cout<<"\nEnter the column number: ";
	cin>>y;
	if(x>m || y>n)
	{
	 cout<<"Invalid row or column number\n";
	 goto top;
	}
	cout<<"\nChoose the letter 's' or 'o' to be filled: ";
	cin>>kk;
	cout<<"\n";
	if(kk!='s' && kk!='o')
	 {
	 printf("\nOnly s or o is allowed\n");
	 goto top;
	 }
	else
	{
	 if(d%2==0)
	 {
	 a[x][y]=kk;
	 if(a[x][y]=='s' && a[x][y+1]=='o' && a[x][y+2]=='s'){
	 a[x][y]='1';a[x][y+1]='1';a[x][y+2]='1';}
	 if(a[x][y]=='s' && a[x][y-1]=='o' && a[x][y-2]=='s'){
	 a[x][y]='1';a[x][y-1]='1';a[x][y-2]='1';}
	 if(a[x][y]=='o' && a[x][y-1]=='s' && a[x][y+1]=='s'){
	 a[x][y]='1';a[x][y-1]='1';a[x][y+1]='1';}
	 if(a[x][y]=='s' && a[x-1][y]=='o' && a[x-2][y]=='s'){
	 a[x][y]='1';a[x-1][y]='1';a[x-2][y]='1';}
	 if(a[x][y]=='o' && a[x-1][y]=='s' && a[x+1][y]=='s'){
	 a[x][y]='1';a[x-1][y]='1';a[x+1][y]='1';}
	 if(a[x][y]=='s' && a[x+1][y+1]=='o' && a[x+2][y+2]=='s'){
	 a[x][y]='1';a[x+1][y+1]='1';a[x+2][y+2]='1';}
	 if(a[x][y]=='o' && a[x-1][y-1]=='s' && a[x+1][y+1]=='s'){
	 a[x][y]='1';a[x-1][y-1]='1';a[x+1][y+1]='1';}
	 if(a[x][y]=='s' && a[x-1][y-1]=='o' && a[x-2][y-2]=='s'){
	 a[x][y]='1';a[x-1][y-1]='1';a[x-2][y-2]='1';}
	 if(a[x][y]=='s' && a[x-1][y+1]=='o' && a[x-2][y+2]=='s'){
	 a[x][y]='1';a[x-1][y+1]='1';a[x-2][y+2]='1';}
	 if(a[x][y]=='s' && a[x+1][y]=='o' && a[x+2][y]=='s'){
	 a[x][y]='1';a[x+1][y]='1';a[x+2][y]='1';}
	 if(a[x][y]=='s' && a[x+1][y-1]=='o' && a[x+2][y-2]=='s'){
	 a[x][y]='1';a[x+1][y-1]='1';a[x+2][y-2]='1';}
	 if(a[x][y]=='o' && a[x-1][y+1]=='s' && a[x+1][y-1]=='s'){
	 a[x][y]='1';a[x-1][y+1]='1';a[x+1][y-1]='1';}
	 display();
	 }
	 else
	 {
	 a[x][y]=kk;
	 if(a[x][y]=='s' && a[x][y+1]=='o' && a[x][y+2]=='s'){
	 a[x][y]='2';a[x][y+1]='2';a[x][y+2]='2';}
	 if(a[x][y]=='s' && a[x][y-1]=='o' && a[x][y-2]=='s'){
	 a[x][y]='2';a[x][y-1]='2';a[x][y-2]='2';}
	 if(a[x][y]=='o' && a[x][y-1]=='s' && a[x][y+1]=='s'){
	 a[x][y]='2';a[x][y-1]='2';a[x][y+1]='2';}
	 if(a[x][y]=='s' && a[x-1][y]=='o' && a[x-2][y]=='s'){
	 a[x][y]='2';a[x-1][y]='2';a[x-2][y]='2';}
	 if(a[x][y]=='o' && a[x-1][y]=='s' && a[x+1][y]=='s'){
	 a[x][y]='2';a[x-1][y]='2';a[x+1][y]='2';}
	 if(a[x][y]=='s' && a[x+1][y+1]=='o' && a[x+2][y+2]=='s'){
	 a[x][y]='2';a[x+1][y+1]='2';a[x+2][y+2]='2';}
	 if(a[x][y]=='o' && a[x-1][y-1]=='s' && a[x+1][y+1]=='s'){
	 a[x][y]='2';a[x-1][y-1]='2';a[x+1][y+1]='2';}
	 if(a[x][y]=='s' && a[x-1][y-1]=='o' && a[x-2][y-2]=='s'){
	 a[x][y]='2';a[x-1][y-1]='2';a[x-2][y-2]='2';}
	 if(a[x][y]=='s' && a[x-1][y+1]=='o' && a[x-2][y+2]=='s'){
	 a[x][y]='2';a[x-1][y+1]='2';a[x-2][y+2]='2';}
	 if(a[x][y]=='s' && a[x+1][y]=='o' && a[x+2][y]=='s'){
	 a[x][y]='2';a[x+1][y]='2';a[x+2][y]='2';}
	 if(a[x][y]=='s' && a[x+1][y-1]=='o' && a[x+2][y-2]=='s'){
	 a[x][y]='2';a[x+1][y-1]='2';a[x+2][y-2]='2';}
	 if(a[x][y]=='o' && a[x-1][y+1]=='s' && a[x+1][y-1]=='s'){
	 a[x][y]='2';a[x-1][y+1]='2';a[x+1][y-1]='2';}
	 display();
	 }

	}
	d++;
 }
getch();
}

void display()
{  printf("   ");
  for(int i=1;i<=m;i++)
	printf("  %d ",i);
	printf("\n");
  for(i=1;i<=m;i++)
	{
	 if(i==1)
	 {
	 printf("   ");
	 for(int w=0;w<m;w++)
	 printf("----");
	 cout<<"\n";
	 }
	 printf("%d  ",i);
	 for(int j=1;j<=n;j++)
	 printf("| %c ",a[i][j]);
	 printf("\n");
	 printf("   ");
	 for(int w=0;w<m;w++)
	 printf("----");
	 printf("\n");
	}
	}
