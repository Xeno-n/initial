//write a program to perform addition and substraction on 2 no. and final result will be always a positive no.
#include <stdio.h>
#include <conio.h>
//#include <math.h>

void main(){
int a,b,sub2,sub;clrscr();
printf("1st no.=");
scanf("%d",&a);
printf("2nd no.=");
scanf("%d",&b);
sub2=b-a;
sub=a-b;
(a>b)?(printf("%d",sub)):printf("%d",sub2);
getch();
}