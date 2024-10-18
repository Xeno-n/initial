#include <stdio.h>
#include <conio.h>
void main(){
float a,b,c,discriminant; //   clrscr();
printf(
"Enter coefficients a, b and c of the quadratic equation (ax^2+bx+c=0):");
scanf("%f%f%f",&a,&b,&c);
discriminant =(b*b)-(4*a*c);
if (discriminant>0)
{
printf("The roots are real and distinct");
}
else if(discriminant==0) {
 printf("The roots are real and equal");
}
else {
printf("The roots are imaginary (complex)");
}
getch();
}

