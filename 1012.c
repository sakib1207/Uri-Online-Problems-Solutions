#include<stdio.h>
int main()
{
double A,B,C,pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
scanf("%lf%lf%lf",&A,&B,&C);
TRIANGULO=(A*C*.5);
CIRCULO=(pi*C*C);
TRAPEZIO=(A+B)*C*.5;
QUADRADO=(B*B);
RETANGULO=(A*B);
printf("TRIANGULO: %.3lf\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
printf("\n");
return 0;
}
