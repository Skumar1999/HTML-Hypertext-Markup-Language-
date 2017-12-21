#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,t;
 clrscr();
 printf("Enter any number : ");
 scanf("%d",&n);
 printf("\nTable of %d is:\n",n);
 for(i=1;i<=10;i++)
 {
  t=n*i;
  printf("%dx%d=%d\n",n,i,t);
 }
 getch();
}