#include <stdio.h>
#include <stdlib.h>

using namespace std;

char a[9]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void tic();
void tic()
{
    printf("_______ o  ____       _______           ____         _______   _____   _____   \n");
    printf("   |    | |              |       /|    |                |     |     | |        \n");
    printf("   |    | |       __     |      /_|    |       __       |     |     | |___     \n");
    printf("   |    | |              |     /  |    |                |     |     | |        \n");
    printf("   |    | |____          |    /   |    |____            |     |_____| |_____   \n");
    printf("\n\n\n");
}


void pattern(char a[9]);
void pattern(char a[9])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%c    " ,a[3*i+j]);
}
printf("\n___|___|___\n   |   |  ");
printf("\n");
}
}


int check(char b[],int c)
{
    if
    (

    (b[0]==b[1]&&b[0]==b[2]&&b[0]!=' ')
       ||
    (b[3]==b[4]&&b[3]==b[5]&&b[3]!=' ')
       ||
    (b[6]==b[7]&&b[6]==b[8]&&b[6]!=' ')
       ||
    (b[0]==b[3]&&b[0]==b[6]&&b[0]!=' ')
       ||
    (b[1]==b[4]&&b[1]==b[7]&&b[1]!=' ')
       ||
    (b[2]==b[5]&&b[2]==b[8]&&b[2]!=' ')
       ||
    (b[0]==b[4]&&b[0]==b[8]&&b[0]!=' ')
       ||
    (b[2]==b[4]&&b[2]==b[6]&&b[2]!=' ')
    )
    {
        c=1;
    }
    return c;
}



void input();
void input()
{
    int g,choice;
    for(int k=0;k<9;k++)
    {
     printf("\nEnter Your Choice to Input Character: ");
     scanf("%d" ,&choice);
     choice--;
     if(a[choice]==' ' &&choice>=0 &&choice<9)
     {
       a[choice]=(k%2==0)?('X'):('O');
       system("cls");
       tic();
       pattern(a);
     }
     else
     {
       printf("Invalid Value\n");
       k--;
       continue;
     }
     g=check(a,0);
     if(g==1 &&k%2==0)
     {
        printf("\n\nX WINS");
        break;
     }
     else if(g==1 &&k%2!=0)
     {
        printf("\n\nO WINS");
        break;
     }
}
if(g==0)
printf("\n\nDraw");
}


int main()
{
tic();
pattern(a);
input();
return 0;
}
