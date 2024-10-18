#include <stdio.h>
#include <conio.h>

void main(){int a,b,c,d,e,sum=0;   clrscr();
printf("Enter a 4-digit no.");
scanf("%d",&a);
b=a/1000;
c=a/100;
c=c%10;
d=a/10;
d=d%10;
e=a%10;
sum=b+c+d+e;
printf("%d",sum);
getch();}
