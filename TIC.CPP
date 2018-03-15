#include<stdio.h>
#include<conio.h>
#include<string.h>
void printi();
void printfi();
void printi()
{
printf("a11 |a12 |a13 \n____|____|____\n");
printf("a21 |a22 |a23 \n____|____|____\n");
printf("a31 |a32 |a33 \n    |    |    \n");
}
void printfi()
{
printf("Enter Your Row and Column\n");
printf("    |    |    \n____|____|____\n");
printf("    |    |    \n____|____|____\n");
printf("    |    |    \n    |    |    \n");
}
void prf();
void prf()
{
int i,j;
int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d     " ,a[3*i+j]);
}
printf("\n____|____|____\n    |    |   ");
printf("\n");
}
}
void input();
void input()
{
int n,c,i,j,b,user,k=0;
while(k<4)
{
printf("\nEnter the Number you want to enter in:");
scanf("%d" ,&n);
n--;
c=n/3;
b=n%3;
printf("USER NO:");
scanf("%d" ,&user);
int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[3*i+j]==a[3*c+b])
{
if(user==1)
{
printf("X     ");
a[3*i+j]=(char)'X';
continue;
}
else if(user==2)
{
printf("O     ");
a[3*i+j]=(char)'O';
continue;
}
}
printf("%d     " ,a[3*i+j]);
}
printf("\n____|____|____\n    |    |   ");
printf("\n");
}
k++;
}
}
void main()
{
clrscr();
printi();
prf();
input();
getch();
}
