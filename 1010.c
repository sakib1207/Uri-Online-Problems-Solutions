#include<stdio.h>
int main()
{
int product_code1,product_code2,price1,price2;
double amount1,amount2,VALOR;
scanf("%d%d%lf\n%d%d%lf",&product_code1,&price1,&amount1,&product_code2,&price2,&amount2);
VALOR=(price1*amount1+price2*amount2);
printf("VALOR A PAGAR: R$ %.2lf",VALOR);
printf("\n");
return 0;
}
