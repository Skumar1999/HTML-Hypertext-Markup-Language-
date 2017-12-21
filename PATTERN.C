//Display A Number pattern. 
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=0,n;
 clrscr();
 printf("Enter the number of lines: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
  for(j=0;j<=i;j++)
   {
     k=k+1;
     printf("%d\t",k);
   }
  printf("\n");
 }
getch();
}