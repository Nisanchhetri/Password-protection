#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void right();
void wrong();
void main()
{
	char a[3][20],b[3][20],u[3][20],u1[3][20];
	int k,i,x,x1,y,z;
	clrscr();
	for(k=0;k<3;k++)
	{
	printf("\nEnter your User name:");
	scanf("%[A-Z a-z]s",&u[0+k][20]);
	textcolor(11);
	cprintf("Please Enter your Password!!");
	for(i=0;;i++)
	{
		fflush(stdin);
		a[k][i]=getch();
		if(a[k][i]==' ')
		goto down;
		gotoxy(6+i,4+k);
		printf("%c ",a[k][i]);
		delay(500);
		gotoxy(6+i,4+k);
		printf("* ");
	}
	down:
	}
	printf("\n");
	for(k=0;k<3;k++)
	{
	top:
	printf("\nPlease select your User name:");
	scanf("%[A-Z a-z]s",u1[k][20]);
	cprintf("Entered your Password!!");
	for(int j=0;j<i;j++)
	{
		fflush(stdin);
		b[k][j]=getch();
		if(b[k][j]==' ')
		goto down1;
		gotoxy(6+j,10);
		printf("%c ",b[k][j]);
		delay(500);
		gotoxy(6+j,10);
		printf("* ");
	}
	down1:
	x=strcmp(u1[k],u[0]);
	y=strcmp(u1[k],u[1]);
	z=strcmp(u1[k],u[2]);
	if(x==0)
	{
		x1=strcmp(b[j],a[i]);
		if(x1==0)
			right();
		else
			wrong();
	}
	else if(y==0)
	{
		x1=strcmp(b[k],a[1]);
		if(x1==0)
			right();
		else
			wrong();
	}
	else if(z==0)
	{
		x1=strcmp(b[k],a[2]);
		if(x1==0)
			right();
		else
			wrong();
	}
	else
		break;
	printf("\n");
	textcolor(14);
	printf("\nTry Again");
	delay(900);
	clrscr();
	goto top;
	}
	getch();

}
void right()
{
	textcolor(10+BLINK);
	cprintf("Password Granted!!");
}
void wrong()
{
	textcolor(RED+BLINK);
	cprintf("Wrong Password!!");

}
