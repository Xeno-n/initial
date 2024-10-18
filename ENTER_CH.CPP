#include <stdio.h>
#include <conio.h>
void main(){char a;        clrscr();
printf("input the alphabet");
scanf("%c",&a);
if((a>='a')&&(a<='z')||(a>='A')&&(a<='Z'))
{printf("Entered character is alphabet");
}
else{printf("entered character is not an alphabet");
}
getch();}