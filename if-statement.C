//Demonstration of if-statement.
#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 clrscr();
 printf("Enter a number less than 5 : ");
 scanf("%d",&num);
 if(num<5)
   printf("The if-statement executed.");
 if(num>5)
   printf("This number is greater than 5!");
 getch();
 }