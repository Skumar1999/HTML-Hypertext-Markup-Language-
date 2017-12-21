//Calculate the total marks and percentage.
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,per,sum,marks[5];
 clrscr();
 for(i=1;i<=5;i++)
 {
  printf("Enter the marks of %d subject:  ",i);
  scanf("%d",&marks[i]);
 }
 printf("\n");
 for(i=1;i<=5;i++)
  printf("Dislay marks of %d subject: %d\n",i,marks[i]);

    sum=sum+marks[i];    printf("\n\n Total Marks: %d",sum);
    per=sum/5;           printf("\n Average Marks: %d",per);
 getch();
}