#include <stdio.h>
#include <conio.h>

void main(){
char x;// clrscr();
printf("enter the character:");
scanf("%c",&x);
if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
printf("Entered character is vowel");
}else{
printf("entered character is consonent");
}
getch();
}