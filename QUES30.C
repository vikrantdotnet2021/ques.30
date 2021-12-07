//write a c program to find and print the square of each one of the even values from 1 to a specified values.
#include<stdio.h>
#include<conio.h>
void main()
{
int x,i;
printf("input an integer");
scanf("%d",&x);
for(i=2;i<=x;i++)
{
if((i%2)==0)
printf("%d %d\n",i,i*i);
}
getch();
}
