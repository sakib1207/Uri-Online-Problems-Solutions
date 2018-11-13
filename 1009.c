#include<stdio.h>
int main()
{
char SELLER_NAME[10];
double TOTAL_SOLD,SALARY,TOTAL;
scanf("%s\n%lf\n%lf",SELLER_NAME,&SALARY,&TOTAL_SOLD);
TOTAL=(TOTAL_SOLD*.15)+SALARY;
printf("TOTAL = R$ %.2lf\n",TOTAL);
return 0;
}
