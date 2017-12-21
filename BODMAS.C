//Calculation on BODMAS.
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,sum;
 clrscr();

 printf("Enter the value of A : ");
 scanf("%d",&a);

 printf("Enter the value of B : ");
 scanf("%d",&b);

 printf("Enter the value of C : ");
 scanf("%d",&c);

 printf("Enter the value of D : ");
 scanf("%d",&d);
 sum=a+b-c*d;

 printf("Solution : %d",sum);
 getch();
 }