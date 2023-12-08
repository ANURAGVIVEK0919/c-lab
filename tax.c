#include<stdio.h>
#define TAX 0.1
#define DIS 0.2
void main()
{
float tprice,uprice;
int qt;
printf("Enter the unit price:");
scanf("%f",&uprice);
printf("\n Enter the quantity:");
scanf("%d", &qt);
tprice=uprice*qt+uprice*TAX-uprice*DIS;
printf("total amount is %f",tprice);
} 
