#include <stdio.h>
#include <conio.h>

void main(){
int a;
clrscr();
printf("Age is");
scanf("%d",&a);
if(a>=18){
printf("you can vote\n");
printf("say hello to world");
}
if(a<18){
printf("grow up little more gentleman");
}
getch();

}