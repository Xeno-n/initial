#include <stdio.h>
#include <conio.h>
int main(){
float cost_price, selling_price, profit_loss;// clrscr();
printf("Enter the cost price:");
scanf("%f",&cost_price);
printf("Enter the selling price:");
scanf("%f",&selling_price);
profit_loss=selling_price-cost_price;
if(profit_loss>0)
{
printf("Profit:%.2f\n",profit_loss);
}
else if (profit_loss<0){
printf("Loss:%.2f\n",-profit_loss);
}
else{
printf("NO profit, no loss.\n");
} getch();
}