#include<stdio.h>
main()
{
int NUMBER,AMOUNT;
float HOUR,SALARY;

scanf("%d\n%d\n%f", &NUMBER, &AMOUNT, &HOUR);
if(HOUR<=720)
SALARY=AMOUNT*HOUR;

printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);

    return 0;
}

