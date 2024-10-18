#include <stdio.h>
#include <conio.h>
void main(){
int a; clrscr();
printf("input the no.");
scanf("%d",&a);
(a%5==0)?printf("Number is divisible by 5"):
(a%10==0)?printf("Number is divisible by 10"):
(a%3==0)?printf("Number is divisible by 3"):
printf("Number is not divisible");
getch();}

