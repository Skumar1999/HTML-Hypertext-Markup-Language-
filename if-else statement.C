//A quict demo of if-else statement.
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Enter either 1 or 2 : ");
scanf("%d",&i);
if(i==1)
  printf("* You choose 1.");
else
 { if(i==2)
   printf("* You choose 2.");
 }
if (2<i)
 {  printf("\nThis number is niether 1 nor 2...");    }
getch();
}