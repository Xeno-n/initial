	  // Wap to implement greatest of 3 no. using Nested if-else.
#include <stdio.h>
#include <conio.h>

void main(){
int a,b,c;clrscr();
printf("first no.");
scanf("%d",&a);
printf("second no.");
scanf("%d",&b);
printf("third no.");
scanf("%d",&c);
if(a>b){
if(a>c){printf("a is greater");}
else{printf("c is greater");}
}
else(b>c)?printf("b is greatest"):printf("c is greater");
getch();
}