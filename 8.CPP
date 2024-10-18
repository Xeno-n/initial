// for reversing 2digit no.

#include <stdio.h>
void main(){
int a,b,rev;
a;b;rev=0;
printf("give no.");
scanf("%d",&a);
b=a%10;//23%10=3
a=a/10;//23/10=2
rev=b*10+a;
printf("rev no. is %d",rev);
getchar;
}

