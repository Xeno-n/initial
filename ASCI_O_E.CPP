#include <stdio.h>
#include <conio.h>
void main(){
char a;              clrscr();
printf("enter the character:");
scanf("%c",&a);
int asci=(int)a;
if(a%2==0){
printf("the asci value of '%c' is %d, which is even.",a,asci);
}
else{
printf("the ASCI value of '%c' is %d, which is odd.",a,asci);}getch();}