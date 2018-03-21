#include <stdio.h>
#include <stdlib.h>

using namespace std;

char a[9]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void pattern(char a[9]);
void pattern(char a[9])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%c     " ,a[3*i+j]);
}
printf("\n____|____|____\n    |    |   ");
printf("\n");
}
}
void input(int choice,int k);
void input(int choice,int k)
{
   if(a[choice]==' ' &&choice>=0 &&choice<=9)
   {
       a[choice]=(k%2==0)?('X'):('O');
       pattern(a);
       k++;
   }
   else
   {
       k--;
       printf("Invalid Value");
   }
}
int main()
{
int f,ch;
for(f=0;f<3;f++)
{
    printf("Enter Your Choice to Input Character: ");
    scanf("%d" ,&ch);
    input(ch,f);
}
return 0;
}
