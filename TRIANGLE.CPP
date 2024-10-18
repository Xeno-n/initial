#include <stdio.h>
#include <conio.h>
void main(){
int a,b,c; // clrscr();
printf("\nEnter first side of a triangle:");
scanf("%d",&a);
printf("Enter second side of a triangle:");
scanf("%d",&b);
printf("Enter third side of a triangle:");
scanf("%d",&c);
(a==b&&b==c&&a>0&&b>0&&c>0)?printf("Equilateral triangle is formed"):
(a==0||b==0||c==0)?printf("Invalid Input"):(a<0||b<0||c<0)?
printf("Invalid Input"):((a==b&&(a+b)>c)||(b==c&&(c+b)>a)||(a==c&&(a+c)>b))?
printf("Isosceles triangle is formed"):
((a!=b||b!=c||a!=c)&&((a+b)>c&&(b+c)>a&&(c+a)>b))?
printf("Scalene triangle is formed"):printf("Invalid Input");
	 getch();
}
